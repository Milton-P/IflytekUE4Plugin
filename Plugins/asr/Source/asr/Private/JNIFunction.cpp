// Fill out your copyright notice in the Description page of Project Settings.


#include "JNIFunction.h"

#if PLATFORM_ANDROID
JNIFunction::JNIFunction()
{
}

JNIFunction::~JNIFunction()
{
}

void JNIFunction::StartRecognizing()
{

	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		static jmethodID MethonId = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "startRecognizing", "()V", false);
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId);
	}
}

void JNIFunction::SotpRecognizing()
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		static jmethodID MethonId = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "stopRecognizing", "()V", false);
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId);
	}
}

void JNIFunction::SetRecognizeType(const int recognizeType)
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		static jmethodID MethonId = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "setRecognizeType", "(I)V", false);
		jint jrecognizeType = (jint)recognizeType;
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId, jrecognizeType);
	}
}

void JNIFunction::SetEngineType(const int engineType)
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		static jmethodID MethonId = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "setEngineType", "(I)V", false);
		jint jengineType = (jint)engineType;
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId, jengineType);
	}

}

void JNIFunction::AudioWrite(const TArray<uint8> &data, const int len)
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		static jmethodID MethonId = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "audioWrite", "([B)V", false);

		jbyte *bytes = (jbyte*)data.GetData();
		jbyteArray jdata = Env->NewByteArray(len);
		Env->SetByteArrayRegion(jdata, 0, len, bytes);
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, MethonId, jdata);
	}
}

extern "C" void Java_com_epicgames_ue4_GameActivity_onASRResult(JNIEnv* jenv, jobject thiz, jstring content)
{
	UE_LOG(LogAndroid, Warning, TEXT("ue milton onResult\n"));
	FString Result;
	FString type;

	const char* charsResult = jenv->GetStringUTFChars(content, 0);
	Result = FString(UTF8_TO_TCHAR(charsResult));
	jenv->ReleaseStringUTFChars(content, charsResult);


	//AsyncTask(ENamedThreads::GameThread, [=]()
	//{
	UE_LOG(LogAndroid, Warning, TEXT("ue milton Native asr :%s\n"), *Result);
	UAsrDelegate::OnAsrResult.Broadcast(Result);
	//UHariSDKDelegates::onHariInfoDelegate.Broadcast(type, Result);
	//});
}
#endif


