// tema avioane.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#include "Munte.h" 
/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{
   
   
    
   
        Munte* Munti = new Munte;
        for (int i = 0; i < 8; i++)
        {
            Munti->adaugareMunteInaltime();

        }

        Munti->avisareIndex();
        delete Munti;
    
   
  
   
}