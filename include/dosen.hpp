#ifndef __DOSEN_HPP__
#define __DOSEN_HPP__

#include <iostream>
#include "include/person.hpp"

class dosen : public person {
private:
	std::string npp;
	std::string departemen;
	
public:
	dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string departemen) ;

	std::string getNPP();
	std::string GetDepartemen();

};

#endif 
