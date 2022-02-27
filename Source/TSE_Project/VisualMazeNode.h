// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VisualMazeNode.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class TSE_PROJECT_API AVisualMazeNode : public AActor
{
	GENERATED_BODY()

public:
	AVisualMazeNode();
	~AVisualMazeNode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AVisualMazeNode*> adjList;
};
