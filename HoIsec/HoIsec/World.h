#pragma once
#ifndef WORLD_H
#define WORLD_H
#include "Territory.h"
#include <iostream>
#include <sstream>
#include <vector>

class World
{
private:
	std::vector<Territory*> territories;

	void TerritoryFactory(TerritoryTypes type);
public:
	World();
	World(const World& copy) = delete;
	~World();
	std::string toString();
	std::string toStringConquerd();
	std::string toStringNotConquerd();
	std::string getInfoTerritory(std::string name);
	Territory* getSpecificTerritory(std::string name) const;
	std::vector<Territory*> getTerritories() const;
	void addTerritories(TerritoryTypes type, int num);
	int getTerritoriesSize();
	void clearTerritories();
	void operator=(const World& copy) = delete;
};

#endif // WORLD_H

