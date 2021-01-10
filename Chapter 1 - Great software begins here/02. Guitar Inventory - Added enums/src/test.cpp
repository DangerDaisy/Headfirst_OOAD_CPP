#include "inventory.hpp"

#include <iostream>

void initialize_inventory(Inventory& inventory);

int main()
{
	Inventory inv;
	initialize_inventory(inv);

	Guitar guitar_erin_likes(
		"V95693",        //Serial number
		1499.95,         //Price
		Builder::FENDER, //Builder
		"Stratocastor",  //Model
		Type::ELECTRIC,  //Type
		Wood::ALDER,     //Back wood
		Wood::ALDER      //Top wood
	);

	Guitar *search_result = inv.search(guitar_erin_likes);
	if(search_result)
	{
		std::cout << "Erin, you might like this " <<
			to_string(search_result->get_builder()) << " " << search_result->get_model() << " " <<
			to_string(search_result->get_type()) << " guitar.\n" <<
			to_string(search_result->get_back_wood()) << " back and sides, " <<
			to_string(search_result->get_top_wood()) << " top.\n" <<
			"You can have it for only $" << search_result->get_price() << ".\n";
	}
	else std::cout << "Sorry, Erin. We have nothing for you.\n";
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
