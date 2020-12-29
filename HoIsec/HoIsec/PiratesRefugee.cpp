#include "PiratesRefugee.h"

int PiratesRefugee::counter = 0;
PiratesRefugee::PiratesRefugee() : Island(TerritoryTypes::PIRATEREFUGE, PIRATE_REFUGEE_RESISTANCE, PIRATE_REFUGEE_INIT_PRODS, PIRATE_REFUGEE_INIT_GOLD, ++counter)
{
	std::cout << "[REFUGIO DE PIRATAS] Construindo... " << Territory::getName() << std::endl;
}

TerritoryTypes PiratesRefugee::getTerritoryType()
{
	return TerritoryTypes::PIRATEREFUGE;
}

std::string PiratesRefugee::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Refugio de Piratas'" << Island::toString();
	return oss.str();
}

PiratesRefugee::~PiratesRefugee()
{
	std::cout << "[REFUGIO DE PIRATAS] Destruindo... " << Territory::getName() << std::endl;
}
