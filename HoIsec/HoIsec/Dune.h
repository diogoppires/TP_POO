#pragma once
#ifndef DUNE_H
#define DUNE_H
#include "Continent.h"

class Dune : public Continent
{
private:
	static int counter;
public:
	Dune();
	TerritoryTypes getTerritoryType() override;
	std::string toString() override;
	Dune* clone() const override;
	void setInitValue() override;
	void updateResources(int year, int turn) override;
	virtual ~Dune() override;
};
#endif // !DUNE_H

