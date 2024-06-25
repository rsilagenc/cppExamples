#include <iostream>
#include <string>

class Temperature{

    public:
        double toFahrenheit(double temperature, std::string scale)
        {
            /*
                celcius to fahrenheit formula :
                    °F = 1.8°C + 32°

                kelvin to fahrenheit formula :
                    (K − 273.15) × 9/5 + 32 = °F
            */

            if (scale == "Celsius")
            {
                return 1.8 * temperature + 32;
            }

        }

    double toCelcius(double temperature, std::string scale)
    {
         /*
            fahrenheit to celcius formula :
                °C = (°F - 32) × 5/9

            kelvin to celcius formula :
                C = K - 273.15
        */
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
                // Assuming the temperature is already in Fahrenheit if it's not in Celsius or Kelvin
                return temperature;
            }
    }

    double toKelvin(double temperature, std::string scale)
    {
        /*
            celcius to kelvin formula :
                K = C + 273.15

            fahrenheit to kelvin formula :
               K = (F − 32) × 5 ⁄ 9 + 273.15

        */
       if (scale == "Celcius")
            {
                return temperature + 273.15;
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

    std::cout << choice;

    Temperature tempObj;

    double currentTemp;

    switch (choice)
    {
    case 1:
        currentTemp = tempObj.toCelcius(temperature, scale);
        std::cout << currentTemp << std::endl;
        std::cout << scale << std::endl;
        break;

    case 2:
        tempObj.toKelvin(temperature, scale);
        break;

    case 3:
        tempObj.toFahrenheit(temperature, scale);
        break;

    default:
        break;
    }
    return 0;

}
