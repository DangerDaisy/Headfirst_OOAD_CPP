#include "inventory.hpp"

void Inventory::add(
	std::string serial_number, 
	double price,
	std::string builder, 
	std::string model, 
	std::string type, 
	std::string back_wood, 
	std::string top_wood
)
{
	guitars.emplace_back(
		serial_number,
		price,
		builder,
		model,
		type,
		back_wood,
		top_wood
	);
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

Guitar *Inventory::search(Guitar &guitar_to_search_for)
{
	for(Guitar &current_guitar: guitars)
	{
		if(current_guitar.get_builder()   != guitar_to_search_for.get_builder())   continue;
		if(current_guitar.get_model()     != guitar_to_search_for.get_model())     continue;
		if(current_guitar.get_type()      != guitar_to_search_for.get_type())      continue;
		if(current_guitar.get_back_wood() != guitar_to_search_for.get_back_wood()) continue;
		if(current_guitar.get_top_wood()  != guitar_to_search_for.get_top_wood())  continue;
		return &current_guitar;
	}
	return nullptr;
}
