#include <iostream>
#include<vector>
#include "Point.h"

int main() 
{
    Point point;
    std::string tfq;
    std::vector <std::string> Victor;
    while (true)
    {
        point.x = rand() % 5;
        point.y = rand() % 5;
        point.z = rand() % 5;
        std::cout << "Tu fais quoi victor ?" << std::endl;
        std::cin >> tfq;
        Victor.push_back(tfq);
        for (int i = 0; i < Victor.size(); i++)
        {
            std::cout << Victor[i] << std::endl;
            std::cout << point.ToString();
        }
    }

    return 0;
}
