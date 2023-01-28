#include <iostream>
#include <vector>

int main()
{
    int temperatureCount;
    int currentTemperature;
    int negativeCount = 0;

    std::cin >> temperatureCount;
    
    for (int i = 0; i < temperatureCount; i++) {
        std::cin >> currentTemperature;
        if (currentTemperature < 0) {
            negativeCount++;
        }
    }

    std::cout << negativeCount;
}