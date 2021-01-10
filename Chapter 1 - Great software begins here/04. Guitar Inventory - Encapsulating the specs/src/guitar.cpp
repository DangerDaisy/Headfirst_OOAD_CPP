#include "guitar.hpp"

Guitar::Guitar(
	std::string serial_number, 
	double price,
	Builder builder, 
	std::string model, 
	Type type, 
	Wood back_wood, 
	Wood top_wood
):
	serial_number(serial_number),
	price(price),
	spec(
		builder,
		model,
		type,
		back_wood,
		top_wood
	)
{}

std::string Guitar::get_serial_number()
{
	return serial_number;
}

double Guitar::get_price()
{
	return price;
}

Guitar_spec Guitar::get_spec()
{
	return spec;
}

void Guitar::set_price(double new_price)
{
	price = new_price;
}
