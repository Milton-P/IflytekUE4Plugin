// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/CoreMinimal.h"

#if PLATFORM_ANDROID
#include "Runtime/Launch/Public/Android/AndroidJNI.h"
#include "Runtime/ApplicationCore/Public/Android/AndroidApplication.h"
/**
 * 
 */
class ASR_API JNIFunction
{
public:
	JNIFunction();
	~JNIFunction();
	static void StartRecognizing();
	static void SotpRecognizing();
	static void SetRecognizeType(const int recognizeType);
	static void SetEngineType(const int engineType);
	static void AudioWrite(const TArray<uint8> &data, const int len);
	static void Speak(const FString& text);
};
#endif