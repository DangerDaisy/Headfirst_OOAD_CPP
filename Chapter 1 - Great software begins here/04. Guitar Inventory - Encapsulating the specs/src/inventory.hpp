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
		Builder builder, 
		std::string model, 
		Type type, 
		Wood back_wood, 
		Wood top_wood
	);
	Guitar *get(std::string serial_number);
	std::vector<Guitar> search(Guitar_spec &guitar_spec_to_find);
private:
	std::vector<Guitar> guitars;
};

#endif
