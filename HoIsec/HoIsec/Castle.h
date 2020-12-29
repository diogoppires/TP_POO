#pragma once
#ifndef CASTLE_H
#define CASTLE_H
#include "Continent.h"

class Castle : 
	public Continent
{
private:
	static int counter;
public:
	Castle();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	~Castle();
};
#endif // !MOUNTAIN_H

