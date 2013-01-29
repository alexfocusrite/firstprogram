//
//  main.cpp
//  firstprogram
//
//  Created by Alex Lucas on 29/01/2013.
//  Copyright (c) 2013 Alex Lucas. All rights reserved.
//

#include <iostream>

int main()
{
    int num;
    int error = 1;
    char choice = 'y';
    
    
    do {
        std::cout << "\nPlease enter an integer between 0 and 9:\n";
        
        do {
            
            std::cin >> num;
            
            if (num < 0 || num > 9)
            {
                std::cout << "You have entered an invalid value please try again:\n";
                error = 1;
            }else error = 0;

            
        } while (error == 1);
        
        switch (num)
        {
                
            case 0:
                std::cout << "Zero\n";
                break;
            case 1:
                std::cout << "One\n";
                break;
            case 2:
                std::cout << "Two\n";
                break;
            case 3:
                std::cout << "Three\n";
                break;
            case 4:
                std::cout << "Four\n";
                break;
            case 5:
                std::cout << "Five\n";
                break;
            case 6:
                std::cout << "Six\n";
                break;
            case 7:
                std::cout << "Seven\n";
                break;
            case 8:
                std::cout << "Eight\n";
                break;
            case 9:
                std::cout << "Nine\n";
                break;
        }
        
        std::cout << "\nWould you like to run the program again?\n";
        std::cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    std::cout << "Bye!!\n";
    
    return 0;
}

