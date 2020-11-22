#pragma once
#ifndef DATA_H
#define DATA_H
#include <string>

#define DEFAULT_RESISTANCE 5
#define DEFAULT_PRODCREATION 1
#define DEFAULT_GOLDCREATION 1
#define DEFAULT_WINPOINTS 1

//ARMY
#define MAX_MILIFORCE 3
#define MAX_MILIFORCE_WITH_DRONE 5

enum class TerritoryTypes {
	TERRITORY,
	INITIAL,
	PLAIN,
	DUNE,
	CASTLE,
	FORTRESS,
	MOUNTAIN,
	MINE,
	FISHINGSITE,
	PIRATEREFUGE
};

enum class Phases {
	CONQUER,
	COLLECTION,
	SHOP,
	EVENTS,
	NONE
};

#endif // !DATA_H
