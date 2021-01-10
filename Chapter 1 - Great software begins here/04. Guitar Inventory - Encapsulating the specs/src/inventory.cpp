#include "inventory.hpp"

void Inventory::add(
	std::string serial_number, 
	double price,
	Builder builder, 
	std::string model, 
	Type type, 
	Wood back_wood, 
	Wood top_wood
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

std::vector<Guitar> Inventory::search(Guitar_spec &guitar_spec_to_find)
{
	std::vector<Guitar> matching_guitars;

	for(Guitar &current_guitar: guitars)
	{
		auto comparison_spec = current_guitar.get_spec();
		if(comparison_spec.get_builder()   != guitar_spec_to_find.get_builder())   continue;
		if(comparison_spec.get_model()     != guitar_spec_to_find.get_model())     continue;
		if(comparison_spec.get_type()      != guitar_spec_to_find.get_type())      continue;
		if(comparison_spec.get_back_wood() != guitar_spec_to_find.get_back_wood()) continue;
		if(comparison_spec.get_top_wood()  != guitar_spec_to_find.get_top_wood())  continue;
		if(comparison_spec.get_builder()   != guitar_spec_to_find.get_builder())   continue;
		matching_guitars.push_back(current_guitar);
	}
	return matching_guitars;
}
