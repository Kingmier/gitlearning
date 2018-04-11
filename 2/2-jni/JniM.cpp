/*Cpp method archieve*/
#include "stdio.h"
#include <conio.h>
//#include <curses.h>
#include <string>
#include <windows.h>

#include "JniM.h"

jstring CStr2Jstring(JNIEnv* env, const char* pat)
{
	//定义java String类 strClass
	jclass strClass = (env)->FindClass("Ljava/lang/String;");
	//获取java String类方法String(byte[],String)的构造器,用于将本地byte[]数组转换为一个新String
	jmethodID ctorID = (env)->GetMethodID(strClass, "<init>", "([BLjava/lang/String;)V");
	//建立byte数组
	jbyteArray bytes = (env)->NewByteArray((jsize)strlen(pat));
	//将char* 转换为byte数组
	(env)->SetByteArrayRegion(bytes, 0, (jsize)strlen(pat), (jbyte*)pat);
	//设置String, 保存语言类型,用于byte数组转换至String时的参数
	jstring encoding = (env)->NewStringUTF("GB2312");
	//将byte数组转换为java String,并输出
	return (jstring)(env)->NewObject(strClass, ctorID, bytes, encoding);
}

// Test Function
JNIEXPORT void JNICALL Java_JniM_sayRunPlace(JNIEnv *, jobject)
{
	printf("I'm running in C++.\n\n");
}

// Get pushed key
JNIEXPORT jstring JNICALL Java_JniM_getKeyCode(JNIEnv *env, jobject)
{
	unsigned int uiKeyScanCode = _getch();
	
	//Direction key
	if (0xE0 == uiKeyScanCode)
	{
		uiKeyScanCode = _getch() * 0x100 + uiKeyScanCode;
	}
	else if (0 == uiKeyScanCode)
	{
		std::string strTmp("");
		return CStr2Jstring(env, strTmp.c_str());
	}

	std::string strKeyValue("");
	switch (uiKeyScanCode){
		case 0x4be0:
			strKeyValue = "Left";
			break;
		case 0x4de0:
			strKeyValue = "Right";
			break;
		case 0x50e0:
			strKeyValue = "Down";
			break;
		case 0x48e0:
			strKeyValue = "Up";
			break;
		case 0x0061:
			strKeyValue = "a";
			break;
		case 0x0064:
			strKeyValue = "d";
			break;
		case 0x0073:
			strKeyValue = "s";
			break;
		case 0x0077:
			strKeyValue = "w";
			break;
		case 0x0020:
			strKeyValue = " ";
			break;
		default:
			strKeyValue = "Invalid";
			break;
	}

	return CStr2Jstring(env, strKeyValue.c_str());
}

// Show panel on console
JNIEXPORT void JNICALL Java_JniM_showPanel(JNIEnv *env, jobject, jobjectArray jObjAry, jint, jint)
{
	system("cls");
	COORD pos = { 0, 0 };    //设定坐标
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);    //函数句柄
	SetConsoleCursorPosition(hOut, pos);

	int iLen = env->GetArrayLength(jObjAry);
	for (int iLoop = 0; iLoop < iLen; ++iLoop)
	{
		jarray jAry = (jarray)env->GetObjectArrayElement(jObjAry, iLoop);
		int iLenSnd = env->GetArrayLength(jAry);
		char* cStr = NULL;
		for (int iLoopSnd = 0; iLoopSnd < iLenSnd; ++iLoopSnd)
		{
			jstring jStr = (jstring)env->GetObjectArrayElement((jobjectArray)jAry, iLoopSnd);

			cStr = (char*)env->GetStringUTFChars(jStr, 0);
			if ('0' == *cStr)
			{
				printf("　");
			}
			else if ('1' == *cStr)
			{
				printf("■");
			}
			else
			{
				printf("%1s", cStr);
			}
		}
	}
	return;
}
