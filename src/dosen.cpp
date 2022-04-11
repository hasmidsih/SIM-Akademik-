#include <iostream>

#include "include/dosen.hpp"


dosen::dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string departemen, int pendidikan)
		: person(id, nama, dd, mm, yy), npp(npp), departemen(departemen) 
{
}


std::string dosen::GetDepartemen()
{
	return departemen;
}

std::string dosen::getNPP()
{
	return this->npp;
}
