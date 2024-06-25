#include <iostream>
#include <string>

class Temperature{

    public:
        double toFahrenheit(double temperature, std::string scale)
        {
            if (scale == "Celsius")
            {
                return 1.8 * temperature + 32;
            }
            else if (scale == "Kelvin")
            {
                return (temperature - 273.15) * 9/5 + 32;
            }
            else
            {
                return temperature;
            }
        }

    double toCelcius(double temperature, std::string scale)
    {
       if (scale == "Fahrenheit")
            {
                return 5.0 / 9.0 * (temperature - 32);
            }
            else if (scale == "Kelvin")
            {
                return temperature - 273.15;
            }
            else
            {
                return temperature;
            }
    }

    double toKelvin(double temperature, std::string scale)
    {
       if (scale == "Celsius")
            {
                return temperature + 273.15;
            }
            else if (scale == "Fahrenheit")
            {
                return (temperature - 32) * 5/9 + 273.15;
            }
            else
            {
                return temperature;
            }
    }

};


int main()
{

    double temperature;
    std::string scale;

    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    std::cout << "Enter the scale (Celsius, Kelvin, Fahrenheit): ";
    std::cin >> scale;

    std::cout << "Temperature and Scale is " << temperature << " " << scale << std::endl;

    int choice;
    std::cout << "Make a choice: " << std::endl;
    std::cout << "1. I want to convert it to Celcius" << std::endl;
    std::cout << "2. I want to convert it to Kelvin" << std::endl;
    std::cout << "3. I want to convert it to Fahrenheit" << std::endl;
    std::cin >> choice;

    Temperature tempObj;

    double currentTemp;

    switch (choice)
    {
    case 1:
        currentTemp = tempObj.toCelcius(temperature, scale);
        std::cout << "Temperature in Celsius: " << currentTemp << std::endl;
        break;

    case 2:
        currentTemp = tempObj.toKelvin(temperature, scale);
        std::cout << "Temperature in Kelvin: " << currentTemp << std::endl;
        break;

    case 3:
        currentTemp = tempObj.toFahrenheit(temperature, scale);
        std::cout << "Temperature in Fahrenheit: " << currentTemp << std::endl;
        break;

    default:
        std::cout << "Invalid choice" << std::endl;
        break;
    }
    return 0;

}
