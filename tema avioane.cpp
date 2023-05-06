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
   
    int temp = 1;
    while (temp) {
        
        std::cout << "Please type in the height of 8 mountains in a random order\n";

        for (int i = 0; i < 8; i++)
        {
           
            Munti->adaugareMunteInaltime();

        }
        std::cout << "The indexes of the mountains in order starting from the highest and finishing with the lowest are:\n";

        Munti->avisareIndex();

        std::cout << "Do you wish to continue the game?\n";
        std::cout << "1-> Yes\n";
        std::cout << "0->No\n";
        std::cin >> temp;

        if (temp == 0) std::cout << "Thank you for playing!\n";
        
    }


    delete Munti;
    
    
}