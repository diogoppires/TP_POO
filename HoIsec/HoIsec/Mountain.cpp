#include "Mountain.h"
#include <iostream>
#include <sstream>


int Mountain::counter = 0;

Mountain::Mountain() : Continent(TerritoryTypes::MOUNTAIN, MOUNTAIN_RESISTANCE, MOUNTAIN_FIRST_PRODS, MOUNTAIN_FIRST_GOLD, ++counter)
{
	turnConquer = 0;
	yearConquer = 0;
#ifdef DEBUG
	std::cout << "[MONTANHA] Construindo... " << Territory::getName() << std::endl;
#endif // DEBUG
}
TerritoryTypes Mountain::getTerritoryType()
{
	return TerritoryTypes::MOUNTAIN;
}

std::string Mountain::toString()
{
	std::ostringstream oss;

	oss << "TIPO = 'Montanha'" << Continent::toString();
	return oss.str();
}
Mountain* Mountain::clone() const
{
	return new Mountain(*this);
}
void Mountain::setInitValue()
{
	counter = 0;
}
void Mountain::updateResources(int year,int turn)
{
	if (conquered) {
		int turnConq = turnConquer * yearConquer;

		if ((year * turn) - turnConq > 2) {
			prodCreation = MOUNTAIN_SECOND_PRODS;
		}
		else {
			prodCreation = MOUNTAIN_FIRST_PRODS;
		}
	}
}
Mountain::~Mountain()
{
#ifdef DEBUG
	std::cout << "[MONTANHA] Destruindo... " << Territory::getName() << std::endl;
#endif // DEBUG
}