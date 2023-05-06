#include "Munte.h"
#include<cmath>
#include<algorithm>
#include<iostream>
Munte::~Munte()
{
	m_Munti.clear();
    while (m_Munti.size() != 0) {
        delete m_Munti.at(0);
    }
}
void Munte::adaugareMunteInaltime()
{
    int inaltime;
   

    //we set the heights and the index of the montains using the class AvionLupta
    AvionLupta* avion = new AvionLupta();
    std::cin >> inaltime;
    std::cout << std::endl;

    avion->setInaltime(inaltime);
    avion->setIndex(incrementareIndex());

    m_Munti.push_back(avion);

    

}

void Munte::avisareIndex()
{
    std::sort(m_Munti.rbegin(), m_Munti.rend(), [](AvionLupta* a, AvionLupta* b)
        {return a->getInaltimeMunti() < b->getInaltimeMunti(); });
    for (int i = 0; i < m_Munti.size(); i++) {

        
        std::cout << m_Munti[i]->getindex() << std::endl;
    }

    m_Munti.clear();
}

int Munte::incrementareIndex()
{
    int static index = 0;
    if (index == 8)index = 0;
    return index++;
}
