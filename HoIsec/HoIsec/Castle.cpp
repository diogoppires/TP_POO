#include "Castle.h"
#include <iostream>
#include <sstream>

int Castle::counter = 0;
Castle::Castle() : Continent(TerritoryTypes::CASTLE, CASTLE_RESISTANCE, CASTLE_FIRST_PRODS, CASTLE_FIRST_GOLD, ++counter)
{
#ifdef DEBUG
	std::cout << "[CASTELO] Construindo... " << Territory::getName() << std::endl;
#endif // DEBUG
}

TerritoryTypes Castle::getTerritoryType()
{
	return TerritoryTypes::CASTLE;
}

std::string Castle::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Castelo'" << Continent::toString();
	return oss.str();
}

Castle* Castle::clone() const
{
	return new Castle(*this);
}

void Castle::setInitValue()
{
	counter = 0;
}

void Castle::updateResources(int year, int turn)
{
	if (turn == 1 || turn == 2) {
		prodCreation = CASTLE_FIRST_PRODS;
	}
	else {
		prodCreation = CASTLE_SECOND_PRODS;
	}
}

Castle::~Castle()
{
#ifdef DEBUG
	std::cout << "[CASTELO] Destruindo... " << Territory::getName() << std::endl;
#endif // DEBUG
}