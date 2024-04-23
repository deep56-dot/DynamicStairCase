// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"



// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	scene = CreateDefaultSubobject<USceneComponent>(TEXT("My Scene"));
	RootComponent = scene;
	
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	int x = 10;
	UE_LOG(LogTemp,Warning,TEXT("Begin Play %d"),x)
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AMyActor::PreEditChange(FProperty* PropertyAboutToChange)
{
	GEngine->AddOnScreenDebugMessage(1, 2, FColor::Blue, "debug message pre");
	UE_LOG(LogTemp, Warning, TEXT("debug message pre"));

}

void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	GEngine->AddOnScreenDebugMessage(2, 2, FColor::Blue, "debug message post");
	UE_LOG(LogTemp, Warning, TEXT("debug message post"));


}

// Called when the actor is spawned or when the construction script is called
void AMyActor::OnConstruction(const FTransform& Transform) {
	GEngine->AddOnScreenDebugMessage(3, 2, FColor::Blue, "debug message construction");
	UE_LOG(LogTemp, Warning, TEXT("debug message construction"));

}
