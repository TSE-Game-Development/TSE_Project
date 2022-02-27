// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <TSE_Project/VisualMazeNode.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VisualMaze.generated.h"

UCLASS(Blueprintable)
class TSE_PROJECT_API AVisualMaze : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVisualMaze();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	TArray<AVisualMazeNode*> nodes;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
