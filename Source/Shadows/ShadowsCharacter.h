// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShadowsCharacter.generated.h"

UCLASS(config=Game)
class AShadowsCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	AShadowsCharacter();

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* Camera;

	/** Returns CameraBoom subobject **/
	class USpringArmComponent * GetCameraBoom() const { return CameraBoom; }

	/** Returns FollowCamera subobject **/
	class UCameraComponent * GetFollowCamera() const { return Camera; }

protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface
};

