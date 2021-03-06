#ifndef GUITAR_HPP
#define GUITAR_HPP

#include "guitar_spec.hpp"

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
	Guitar_spec get_spec();
	
	void set_price(double new_price);
private:
	std::string serial_number;
	double price;
	Guitar_spec spec;
};

#endif
