#include "my_app_utility_view.h"

#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Enter minimum integer value:" << std::endl;
    int min = 0;
    std::cin >> min;

    std::cout << "Enter maximum integer value:" << std::endl;
    int max = 0;
    std::cin >> max;

    std::cout << my::UtilityView(min, max) << std::endl;
    return 0;
}
