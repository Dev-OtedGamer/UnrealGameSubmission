// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelGenerator.generated.h"

UCLASS()
class COINCOLLECTOR_API ALevelGenerator : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ALevelGenerator();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Spawns walls in the level
    void SpawnWalls();

    // Spawns coins in the level
    void SpawnCoins();

public:
    // The size of the level (in grid units)
    UPROPERTY(EditAnywhere, Category = "Generation")
    int32 GridSizeX = 10;

    UPROPERTY(EditAnywhere, Category = "Generation")
    int32 GridSizeY = 10;

    // The number of walls to spawn
    UPROPERTY(EditAnywhere, Category = "Generation")
    int32 NumWalls = 20;

    // The number of coins to spawn
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Generation")
    int32 NumCoins = 5;

    // The wall actor to spawn
    UPROPERTY(EditAnywhere, Category = "Generation")
    TSubclassOf<AActor> WallClass;

    // The coin actor to spawn
    UPROPERTY(EditAnywhere, Category = "Generation")
    TSubclassOf<AActor> CoinClass;
};