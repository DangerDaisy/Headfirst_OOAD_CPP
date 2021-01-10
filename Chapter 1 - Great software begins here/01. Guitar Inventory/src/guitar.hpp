#ifndef GUITAR_HPP
#define GUITAR_HPP

#include <string> 

class Guitar
{
public:
	Guitar(
		std::string serial_number, 
		double price,
		std::string builder, 
		std::string model, 
		std::string type, 
		std::string back_wood, 
		std::string top_wood
	);

	std::string get_serial_number();
	double get_price();
	std::string get_builder();
	std::string get_model();
	std::string get_type();
	std::string get_back_wood();
	std::string get_top_wood();

	void set_price(double new_price);
private:
	std::string serial_number;
	double price;

	std::string builder;
	std::string model;
	std::string type;
	std::string back_wood;
	std::string top_wood;	
};

#endif
