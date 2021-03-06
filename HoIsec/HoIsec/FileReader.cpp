#include "FileReader.h"
#include <algorithm>
#include <sstream>
#include <iostream>

bool FileReader::is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

bool FileReader::verifyArgs(std::string territory, std::string quant) {
	return converter.StringToTerritoryTypes(territory) != TerritoryTypes::NONE && is_number(quant);
}

bool FileReader::verifyData(const std::string& data)
{
	std::string auxType, auxNumber, command;
	std::istringstream iss(data);
	
	iss >> command >> auxType >> auxNumber;
	if (command == "cria" && verifyArgs(auxType, auxNumber)) {
#ifdef DEBUG
		std::cout << "[FileReader]: Valido!" << std::endl;
#endif // DEBUG
		return true;
	}
#ifdef DEBUG
	std::cout << "[FileReader]: Invalido!" << std::endl;
#endif // DEBUG

	return false;
}

FileReader::FileReader(std::string fileName): converter() {
	fileI.open(fileName);
#ifdef DEBUG
	std::cout << "[FILEREADER] Construindo...\n";
#endif // DEBUG

}

std::vector<std::string> FileReader::readFile()
{
	std::vector<std::string> info;
	std::string text;
	if (fileI.is_open()) {
		while (getline(fileI, text)) {
			std::transform(text.begin(), text.end(), text.begin(), ::tolower);
			if (verifyData(text) == true) {
				info.push_back(text);
			}
		}
	}
	else {
		std::cerr << "[FILEREADER] Erro ao abrir o ficheiro.\n"; // cout e cerr are equal but they can be directioned to distinct files.
	}
	
	return info;
}

FileReader::~FileReader()
{
	fileI.close();
#ifdef DEBUG
	std::cout << "[FILEREADER] Destruindo...\n";
#endif // DEBUG

}
