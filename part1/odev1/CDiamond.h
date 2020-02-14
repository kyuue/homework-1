#pragma once

#include "CShape.h"

class CDiamond : public CShape
{
public:
	CDiamond(int shapeSize);

	void Draw() override;

};