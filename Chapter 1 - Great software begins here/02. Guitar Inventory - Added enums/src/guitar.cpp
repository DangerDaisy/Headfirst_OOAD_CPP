#include "guitar.hpp"

std::string to_string(Builder builder)
{
	switch(builder)
	{
		case Builder::FENDER:   return "Fender";
		case Builder::MARTIN:   return "Martin";
		case Builder::GIBSON:   return "Gibson";
		case Builder::COLLINGS: return "Collings";
		case Builder::OLSON:    return "Olson";
		case Builder::RYAN:     return "Ryan";
		case Builder::PRS:      return "P.R.S";
		case Builder::ANY:      return "Any";
	}
	return "";
}
std::string to_string(Type type)
{
	switch(type)
	{
		case Type::ACOUSTIC: return "acoustic";
		case Type::ELECTRIC: return "electric";
	}
	return "";
}

std::string to_string(Wood wood)
{
	switch(wood)
	{
		case Wood::INDIAN_ROSEWOOD:    return "Indian Rosewood";
		case Wood::BRAZILIAN_ROSEWOOD: return "Brazilian Rosewood";
		case Wood::MAHOGANY:           return "Mahogany";
		case Wood::MAPLE:              return "Maple";
		case Wood::COCOBOLO:           return "Cocobolo";
		case Wood::CEDAR:              return "Cadar";
		case Wood::ADIRONDACK:         return "Adirondack";
		case Wood::ALDER:              return "Alder";
		case Wood::SITKA:              return "Sitka";
	}
	return "";
}

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

Builder Guitar::get_builder()
{
	return builder;
}

std::string Guitar::get_model()
{
	return model;
}

Type Guitar::get_type()
{
	return type;
}

Wood Guitar::get_back_wood()
{
	return back_wood;
}

Wood Guitar::get_top_wood()
{
	return top_wood;
}

void Guitar::set_price(double new_price)
{
	price = new_price;
}
