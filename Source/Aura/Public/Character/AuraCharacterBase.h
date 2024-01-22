// Copyright Cireki

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

// makes class undragable inside the game
UCLASS(Abstract)

class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAuraCharacterBase();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
