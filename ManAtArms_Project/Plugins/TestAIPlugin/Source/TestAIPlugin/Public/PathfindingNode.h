// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class TESTAIPLUGIN_API PathfindingNode
{
public:
	PathfindingNode(int GridXPos, int GridYPos, int GridZPos);
	~PathfindingNode();


	PathfindingNode* ParentNode;
	int GridX, GridY, GridZ;
	int GCost = 0; 
	int HCost = 0;
	float FCost();
};
