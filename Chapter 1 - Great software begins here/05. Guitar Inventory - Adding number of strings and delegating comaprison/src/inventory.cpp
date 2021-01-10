#include "inventory.hpp"

void Inventory::add(std::string serial_number, double price, Guitar_spec spec)
{
	guitars.emplace_back(serial_number, price, spec);
}

Guitar *Inventory::get(std::string serial_number)
{
	for(Guitar &guitar : guitars)
	{
		if(serial_number == guitar.get_serial_number())
		{
			return &guitar;
		}
	}
	return nullptr;
}

std::vector<Guitar> Inventory::search(Guitar_spec &guitar_spec_to_find)
{
	std::vector<Guitar> matching_guitars;

	for(Guitar &current_guitar: guitars)
	{
		if(current_guitar.get_spec() == guitar_spec_to_find)
			matching_guitars.push_back(current_guitar);
	}
	return matching_guitars;
}
