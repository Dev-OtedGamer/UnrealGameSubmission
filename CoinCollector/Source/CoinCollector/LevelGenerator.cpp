#include "LevelGenerator.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ALevelGenerator::ALevelGenerator()
{
    PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ALevelGenerator::BeginPlay()
{
    Super::BeginPlay();

    SpawnWalls();
    SpawnCoins();
}

// Spawns walls at random positions
void ALevelGenerator::SpawnWalls()
{
    if (!WallClass) return;

    for (int i = 0; i < NumWalls; i++)
    {
        float X = UKismetMathLibrary::RandomIntegerInRange(0, GridSizeX) * 100.0f;
        float Y = UKismetMathLibrary::RandomIntegerInRange(0, GridSizeY) * 100.0f;

        FVector SpawnLocation = FVector(X, Y, 0.0f);
        FRotator SpawnRotation = FRotator::ZeroRotator;

        GetWorld()->SpawnActor<AActor>(WallClass, SpawnLocation, SpawnRotation);
    }
}

// Spawns coins at random positions
void ALevelGenerator::SpawnCoins()
{
    if (!CoinClass) return;

    for (int i = 0; i < NumCoins; i++)
    {
        float X = UKismetMathLibrary::RandomIntegerInRange(0, GridSizeX) * 100.0f;
        float Y = UKismetMathLibrary::RandomIntegerInRange(0, GridSizeY) * 100.0f;

        FVector SpawnLocation = FVector(X, Y, 50.0f); // Slightly above ground
        FRotator SpawnRotation = FRotator::ZeroRotator;

        GetWorld()->SpawnActor<AActor>(CoinClass, SpawnLocation, SpawnRotation);
    }
}
