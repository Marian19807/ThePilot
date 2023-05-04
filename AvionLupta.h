#pragma once
#include<vector>


class AvionLupta
{
	int inaltimeMunti=0;
	int indexMunti=0;
	AvionLupta(int inaltime, int index);
	
public:
	
	AvionLupta();
	int getInaltimeMunti();
	int getindex();
	
	void setInaltime(int inaltime);
	void setIndex(int index);

	~AvionLupta();

	

};

