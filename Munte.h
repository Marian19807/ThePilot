#pragma once
#include"AvionLupta.h"
class Munte 
    
{
    std::vector<AvionLupta*> m_Munti;
public:

    ~Munte();

    //method to add random heights of the mountains
    void adaugareMunteInaltime();
    //method to print the index of the every montain starting with the heighest one
    void avisareIndex();
    //method to incremet the index after every mountain is added
    int incrementareIndex();

};

