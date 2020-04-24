// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AsrDelegate.generated.h"

/**
 * 
 */
UCLASS()
class ASR_API UAsrDelegate : public UObject
{
	GENERATED_BODY()

public:
	DECLARE_MULTICAST_DELEGATE_OneParam(AsrResultInfo, const FString&);
	static AsrResultInfo OnAsrResult;
	
};
