#pragma once
#ifndef MINE_H
#define MINE_H
#include "Continent.h"

class Mine : 
	public Continent
{
private:
	static int counter;
public:
	Mine();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	virtual ~Mine() override;
};
#endif // !MINE_H

