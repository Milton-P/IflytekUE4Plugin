// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "testActor.generated.h"

UCLASS()
class ASRPLUGIN_API AtestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AtestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "testActor")
	void Start();
	UFUNCTION(BlueprintCallable, Category = "testActor")
	void Stop();

	UFUNCTION(BlueprintCallable, Category = "testActor")
    void SetRecognizeType(const int recognizeType);

	UFUNCTION(BlueprintCallable, Category = "testActor")
	void SetEngineType(const int engineType);

	UFUNCTION(BlueprintCallable, Category = "testActor")
	void Speak(const FString& text);

	void OnRecive(const FString &msg);

	UFUNCTION(BlueprintImplementableEvent)
	void  UpdateText(const FString &msg);

};
