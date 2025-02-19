#include "address.h"
#include <iostream>

Address::Address(){
	street = "";
	city = "";
	state = "";
	zip = "";
} //end 

void address::init(std::string street,std::string city,std::string state,std::string zip){
	Address:: street = street;
	Address:: city = city;
	Address:: state = state;
	Address:: zip = zip;
