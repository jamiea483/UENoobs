// Fill out your copyright notice in the Description page of Project Settings.

#include "SniperPlayerController.h"


void ASniperPlayerController::SetScore(int value)
{
	score += value;
}



int ASniperPlayerController::GetScore()
{
	return score;
}
