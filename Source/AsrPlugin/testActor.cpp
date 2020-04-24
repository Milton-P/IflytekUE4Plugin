// Fill out your copyright notice in the Description page of Project Settings.


#include "testActor.h"
#include "JNIFunction.h"
#include "AsrDelegate.h"
#include "OutPutDeviceDebug.h"
// Sets default values
AtestActor::AtestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AtestActor::BeginPlay()
{
	Super::BeginPlay();
	UAsrDelegate::OnAsrResult.AddUObject(this, &AtestActor::OnRecive);
}

// Called every frame
void AtestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AtestActor::Start()
{
	UE_LOG(LogTemp, Warning, TEXT("milton start StartRecognizing method"));
#if PLATFORM_ANDROID
	JNIFunction::StartRecognizing();
#endif
}

void AtestActor::Stop()
{
	UE_LOG(LogTemp, Warning, TEXT("milton start SotpRecognizing method"));
#if PLATFORM_ANDROID
	JNIFunction::SotpRecognizing();
#endif
}

void AtestActor::SetRecognizeType(const int recognizeType)
{
	UE_LOG(LogTemp, Warning, TEXT("milton start SetRecognizeType method"));
#if PLATFORM_ANDROID
	JNIFunction::SetRecognizeType(recognizeType);
#endif
}


void AtestActor::SetEngineType(const int engineType)
{
	UE_LOG(LogTemp, Warning, TEXT("milton start SetEngineType method"));
#if PLATFORM_ANDROID
	JNIFunction::SetEngineType(engineType);
#endif
}

void AtestActor::OnRecive(const FString &msg)
{
	UE_LOG(LogTemp, Warning, TEXT("milton testActor OnRecive msg"));
	AsyncTask(ENamedThreads::GameThread, [=]()
	{
	UpdateText(msg);
	});
	
}
