// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/Object.h"
#include "MyActor.generated.h"

UCLASS()
class UE_PRACTICE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void OnConstruction(const FTransform& Transform);

	UPROPERTY()
	bool bVar = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My_Vars", meta = (bVar, Umin = 0.5, Umax = 2.5))
	float f = 1.2;
	

	UPROPERTY(VisibleDefaultsOnly)
	class USceneComponent* scene;

	UPROPERTY(VisibleDefaultsOnly)
	AActor* RefActor;

	UPROPERTY(EditAnywhere)
	float MyVariable;

};
