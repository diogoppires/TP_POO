#pragma once
#ifndef PLAIN_H
#define PLAIN_H
#include "Continent.h"

class Plain : 
	public Continent
{
private:
	static int counter;
public:
	Plain();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	~Plain();
};
#endif // !PLAIN_H

