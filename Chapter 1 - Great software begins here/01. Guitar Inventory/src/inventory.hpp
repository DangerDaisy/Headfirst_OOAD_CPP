#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "guitar.hpp"

#include <vector>

class Inventory
{
public:
	void add(
		std::string serial_number, 
		double price,
		std::string builder, 
		std::string model, 
		std::string type, 
		std::string back_wood, 
		std::string top_wood
	);
	Guitar *get(std::string serial_number);
	Guitar *search(Guitar &guitar);
private:
	std::vector<Guitar> guitars;
};

#endif
