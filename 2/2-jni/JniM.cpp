/* C++ interface for java */

#include "stdio.h"
#include "JniM.h"
#include "string.h"

jstring CStr2Jstring(JNIEnv* env, const char* pat)
{
	//����java String�� strClass
	jclass strClass = (env)->FindClass("Ljava/lang/String;");
	//��ȡjava String�෽��String(byte[],String)�Ĺ�����,���ڽ�����byte[]����ת��Ϊһ����String
	jmethodID ctorID = (env)->GetMethodID(strClass, "<init>", "([BLjava/lang/String;)V");
	//����byte����
	jbyteArray bytes = (env)->NewByteArray((jsize)strlen(pat));
	//��char* ת��Ϊbyte����
	(env)->SetByteArrayRegion(bytes, 0, (jsize)strlen(pat), (jbyte*)pat);
	//����String, ������������,����byte����ת����Stringʱ�Ĳ���
	jstring encoding = (env)->NewStringUTF("GB2312");
	//��byte����ת��Ϊjava String,�����
	return (jstring)(env)->NewObject(strClass, ctorID, bytes, encoding);
}

JNIEXPORT void JNICALL Java_JniM_sayRunPlace(JNIEnv * env, jobject)
{
	printf("I'm running in C++");
	
	//return CStr2Jstring(env, "success");
}