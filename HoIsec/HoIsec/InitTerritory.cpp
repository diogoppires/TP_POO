#include "InitTerritory.h"
#include <iostream>
#include <sstream>

InitTerritory::InitTerritory() : Territory(INITIAL_TERRITORY_NAME, INITIAL_RESISTANCE, INITIAL_PROD_CREATION, INITIAL_GOLD_CREATION, INITIAL_WINPOINTS)
{
#ifdef DEBUG
	std::cout << "[TERRITORIO INICIAL] Construindo... " << Territory::getName() << std::endl;
#endif // DEBUG

}

TerritoryTypes InitTerritory::getTerritoryType()
{
	return TerritoryTypes::INITIAL;
}

std::string InitTerritory::toString() 
{
	std::ostringstream oss;

	oss << "TIPO = '" << "Territorio Inicial" << "'\n" << Territory::toString();
	return oss.str();
}

InitTerritory* InitTerritory::clone() const
{
	return new InitTerritory(*this);
}

void InitTerritory::setInitValue()
{
}


void InitTerritory::updateResources(int year, int turn)
{
}

InitTerritory::~InitTerritory()
{
#ifdef DEBUG
	std::cout << "[TERRITORIO INICIAL] Destruindo... " << Territory::getName() << std::endl;
#endif // DEBUG

}


