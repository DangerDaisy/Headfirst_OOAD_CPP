#ifndef GUITAR_SPECS_HPP
#define GUITAR_SPECS_HPP

#include <string>

//Builder enum
enum class Builder
{
	FENDER = 0,
	MARTIN,
	GIBSON,
	COLLINGS,
	OLSON,
	RYAN,
	PRS,
	ANY
};

std::string to_string(Builder builder);

//Type enum
enum class Type
{
	ACOUSTIC = 0,
	ELECTRIC
};

std::string to_string(Type type);

//Wood enum
enum class Wood
{
	INDIAN_ROSEWOOD = 0,
	BRAZILIAN_ROSEWOOD,
	MAHOGANY,
	MAPLE,
	COCOBOLO,
	CEDAR,
	ADIRONDACK,
	ALDER,
	SITKA
};

std::string to_string(Wood wood);

class Guitar_spec
{
public:
    Guitar_spec(
        Builder builder, 
		std::string model, 
		Type type, 
		Wood back_wood, 
		Wood top_wood
    );
    Builder get_builder();
	std::string get_model();
	Type get_type();
	Wood get_back_wood();
	Wood get_top_wood();
private:
	Builder builder;
	std::string model;
	Type type;
	Wood back_wood;
	Wood top_wood;
};

#endif
