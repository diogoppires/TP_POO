#pragma once
#ifndef TERRITORY_H
#define TERRITORY_H
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "data.h"

class Territory
{
protected:
	Utils converter;
	std::string name;
	int resistance;
	int prodCreation;
	int goldCreation;
	int winPoints;
	bool conquered;
public:
	Territory(TerritoryTypes type, int resistance, int prodCreation, int goldCreation, int winPoints, int counter);

	Territory(std::string initName, int initResistance, int initProdCreation, int initGoldCreation, int initWinPoints);

	~Territory();

	virtual std::string toString();

	std::string getName() const;

	int getResistance() const;

	void setResistance(int resistance);

	int getProdCreation() const;

	void setProdCreation(int prodCreation);

	int getGoldCreation() const;

	void setGoldCreation(int goldCreation);

	int getWinPoints() const;

	void setWinPoints(int winPoints);

	bool isConquered() const;

	void changeConquered();

	void changeNotConquered();

	std::string buildName(TerritoryTypes type,int value);

	virtual TerritoryTypes getTerritoryType() = 0;
};


#endif // !TERRITORY_H
