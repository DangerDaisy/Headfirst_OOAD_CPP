#include "inventory.hpp"

#include <iostream>

void initialize_inventory(Inventory& inventory);

int main()
{
	Inventory inv;
	initialize_inventory(inv);

	Guitar guitar_erin_likes(
		"V95693",       //Serial number
		1499.95,        //Price
		"Fender",       //Builder
		"Stratocastor", //Model
		"electric",     //Type
		"Alder",        //Back wood
		"Alder"         //Top wood
	);

	Guitar *search_result = inv.search(guitar_erin_likes);
	if(search_result)
	{
		std::cout << "Erin, you might like this " <<
			search_result->get_builder() << " " << search_result->get_model() << " " <<
			search_result->get_type() << " guitar.\n" <<
			search_result->get_back_wood() << " back and sides, " <<
			search_result->get_top_wood() << " top.\n" <<
			"you can have it for only $" << search_result->get_price() << ".\n";
	}
	else std::cout << "Sorry, Erin. We have nothing for you.\n";
	return 0;	
}

void initialize_inventory(Inventory &inventory)
{
	inventory.add(
		"V95693",
		1499.95,
		"Fender",
		"Stratocastor",
		"electric",
		"Alder",
		"Alder"
	);
	inventory.add(
		"SW_002122",
		1549.45,
		"Leth",
		"Stummer DS-2",
		"Acoustic",
		"Mahogany",
		"Mahogany"
	);
	inventory.add(
		"004344512",
		1129.10,
		"Drummand",
		"Prima-Bass 2",
		"Bass",
		"Oak",
		"Oak"
	);
}
