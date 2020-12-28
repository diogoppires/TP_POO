#include "Storage.h"

Storage::Storage()
{
	maxProducts = MAX_STORAGE;
	products = 0;
	std::cout << "[STORAGE] Construindo...\n";
}

int Storage::getProducts() const
{
	return products;
}

int Storage::getMaxProducts() const
{
	return maxProducts;
}

bool Storage::addProducts(int quant)
{
	if (quant <= 0) return false;
	if (products + quant > maxProducts)
		products = maxProducts;
	else
		products += quant;
	return true;
}

bool Storage::subProducts(int quant)
{
	if (quant <= 0) return false;
	if (products - quant < 0)
		products = 0;
	else
		products -= quant;
	return true;
}

void Storage::setMaxProducts(int max)
{
	this->maxProducts = max;
}

std::string Storage::toString() const
{
	std::ostringstream oss;
	oss << "[STORAGE] Armazenamento: " << products << std::endl;
	return oss.str();
}

Storage::~Storage()
{
	std::cout << "[STORAGE] Destruindo..." << std::endl;
}
