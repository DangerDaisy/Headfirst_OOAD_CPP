#include "guitar.hpp"

Guitar::Guitar(
	std::string serial_number, 
	double price,
	std::string builder, 
	std::string model, 
	std::string type, 
	std::string back_wood, 
	std::string top_wood
):
	serial_number(serial_number),
	price(price),
	builder(builder),
	model(model),
	type(type),
	back_wood(back_wood),
	top_wood(top_wood)
{}

std::string Guitar::get_serial_number()
{
	return serial_number;
}

double Guitar::get_price()
{
	return price;
}

std::string Guitar::get_builder()
{
	return builder;
}

std::string Guitar::get_model()
{
	return model;
}

std::string Guitar::get_type()
{
	return type;
}

std::string Guitar::get_back_wood()
{
	return back_wood;
}

std::string Guitar::get_top_wood()
{
	return top_wood;
}

void Guitar::set_price(double new_price)
{
	price = new_price;
}
