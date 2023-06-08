#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "func.h"

int input_valid(int& x, const char* errorMessage)
{
    bool flag = true;
    while (flag) {
        try {
            std::cin >> x;
            if (std::cin.fail()) throw std::invalid_argument(errorMessage);

            flag = false;
            std::cin.ignore(std::cin.rdbuf()->in_avail());
        }
        catch (const std::invalid_argument& in) {
            std::cout << in.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::cin.rdbuf()->in_avail());
        }

        catch (const std::exception& ex) {
            std::cout << ex.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::cin.rdbuf()->in_avail());
        }
    }
}



