#include "inventory.hpp"

#include <iostream>

void initialize_inventory(Inventory& inventory);

int main()
{
	Inventory inv;
	initialize_inventory(inv);

	Guitar_spec guitar_erin_likes(
		Builder::FENDER, //Builder
		"Stratocastor",  //Model
		Type::ELECTRIC,  //Type
		Wood::ALDER,     //Back wood
		Wood::ALDER      //Top wood
	);

	std::vector<Guitar> search_results = inv.search(guitar_erin_likes);
	if(!search_results.empty())
	{
		std::cout << "Erin, you might like these guitars:\n";
		for(auto current_guitar: search_results)
		{
			Guitar_spec current_result = current_guitar.get_spec();
			std::cout << to_string(current_result.get_builder()) << " " << current_result.get_model() << " " <<
				to_string(current_result.get_type()) << " guitar.\n" <<
				"\t" << to_string(current_result.get_back_wood()) << " back and sides, " <<
				        to_string(current_result.get_top_wood()) << " top.\n" <<
				"You can have it for only $" << current_guitar.get_price() << ".\n---\n";
		}
	}
	else 
		std::cout << "Sorry, Erin. We have nothing for you.\n";

	return 0;	
}

void initialize_inventory(Inventory &inventory)
{
	inventory.add(
		"V95693",
		1499.95,
		Builder::FENDER,
		"Stratocastor",
		Type::ELECTRIC,
		Wood::ALDER,
		Wood::ALDER
	);
	inventory.add(
		"V854433",
		1199.95,
		Builder::FENDER,
		"Stratocastor",
		Type::ELECTRIC,
		Wood::ALDER,
		Wood::ALDER
	);
	inventory.add(
		"SW_002122",
		1549.45,
		Builder::OLSON,
		"Stummer DS-2",
		Type::ACOUSTIC,
		Wood::MAHOGANY,
		Wood::MAHOGANY
	);
	inventory.add(
		"004344512",
		1129.10,
		Builder::GIBSON,
		"Prima-Bass 2",
		Type::ELECTRIC,
		Wood::SITKA,
		Wood::BRAZILIAN_ROSEWOOD
	);
}
