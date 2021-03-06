/* C++ interface for java */

#include "stdio.h"
#include "JniM.h"
#include "string.h"

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

JNIEXPORT void JNICALL Java_JniM_sayRunPlace(JNIEnv * env, jobject)
{
	printf("I'm running in C++");
	
	//return CStr2Jstring(env, "success");
}