#pragma once
#ifndef EMPIRE_H
#define EMPIRE_H
#include <vector>
#include "data.h"
#include "Storage.h"
#include "SafeBox.h"
#include "Army.h"
#include "Territory.h"
#include "StockExchange.h"
#include "CentralBank.h"
#include "Missile.h"
#include "Drone.h"
#include "Defenses.h"

class Empire
{
private:
	std::vector<Territory*>empire;
	Storage storage;
	SafeBox safe;
	Army army;
	Utils utils;
	StockExchange stockExchange;
	CentralBank centralBank;
	
	int score;
	int prodCreation;
	int goldCreation;
public:
	//Constructor
	Empire(Territory* initial);

	//Getter
	int getGold() const;
	int getGoldCreation() const;
	int getProds() const;
	int getProdsCreation() const;
	int getScore() const;
	int getMiliForce() const;
	int getMaxMiliForce() const;
	int getMaxStorage() const;
	int getMaxSafeBox() const;

	int haveStockExchange() const;
	int haveCentralBank() const;

	void updateEmpire();

	bool receiveGold(int quant);
	bool receiveProds(int quant);
	bool spendGold(int quant);
	bool spendProds(int quant);

	bool attack(Territory* territory,int luckyFactor);

	//toString
	std::string toString() const;
	//Destructor
	~Empire();
};

#endif // !EMPIRE_H
