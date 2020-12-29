#include "Fortress.h"

int Fortress::counter = 0;
Fortress::Fortress() : Continent(TerritoryTypes::FORTRESS, FORTRESS_RESISTANCE, FORTRESS_INIT_PRODS, FORTRESS_INIT_GOLD, ++counter)
{
	std::cout << "[FORTALEZA] Construindo... " << Territory::getName() << std::endl;
}
TerritoryTypes Fortress::getTerritoryType()
{
	return TerritoryTypes::FORTRESS;
}

std::string Fortress::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Fortaleza'" << Continent::toString();
	return oss.str();
}
Fortress::~Fortress()
{
	std::cout << "[FORTALEZA] Destruindo... " << Territory::getName() << std::endl;
}
