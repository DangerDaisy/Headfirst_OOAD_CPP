#include "guitar_spec.hpp"

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

Guitar_spec::Guitar_spec(
    Builder builder, 
	std::string model, 
	Type type, 
	Wood back_wood, 
	Wood top_wood
):
    builder(builder),
    model(model),
    type(type),
    back_wood(back_wood),
    top_wood(top_wood)
{}

Builder Guitar_spec::get_builder()
{
	return builder;
}

std::string Guitar_spec::get_model()
{
	return model;
}

Type Guitar_spec::get_type()
{
	return type;
}

Wood Guitar_spec::get_back_wood()
{
	return back_wood;
}

Wood Guitar_spec::get_top_wood()
{
	return top_wood;
}
