#ifndef GUITAR_HPP
#define GUITAR_HPP

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

//Guitar class
class Guitar
{
public:
	Guitar(
		std::string serial_number, 
		double price,
		Builder builder, 
		std::string model, 
		Type type, 
		Wood back_wood, 
		Wood top_wood
	);

	std::string get_serial_number();
	double get_price();
	Builder get_builder();
	std::string get_model();
	Type get_type();
	Wood get_back_wood();
	Wood get_top_wood();

	void set_price(double new_price);
private:
	std::string serial_number;
	double price;

	Builder builder;
	std::string model;
	Type type;
	Wood back_wood;
	Wood top_wood;	
};

#endif
