muhammad qadeer khan
etea id 06067
#include <iostream>  
using namespace std;

int main()
{
    int choice;      // To store user choice
    double value;    // To store input value
    double result;   // To store result

    // Show menu
    cout << "------ Conversion Menu ------" << endl;
    cout << "1. Convert Kilometers to Meters" << endl;
    cout << "2. Convert Meters to Centimeters" << endl;
    cout << "3. Convert Kilograms to Grams" << endl;
    cout << "4. Convert Celsius to Fahrenheit" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;   // Take choice from user

    // Switch checks which option user selected
    switch(choice)
    {
        case 1:
            cout << "Enter kilometers: ";
            cin >> value;                 // Take km value
            result = value * 1000;        // 1 km = 1000 meters
            cout << "Meters = " << result;
            break;                        // Stop here

        case 2:
            cout << "Enter meters: ";
            cin >> value;                 // Take meter value
            result = value * 100;         // 1 meter = 100 cm
            cout << "Centimeters = " << result;
            break;

        case 3:
            cout << "Enter kilograms: ";
            cin >> value;                 // Take kg value
            result = value * 1000;        // 1 kg = 1000 grams
            cout << "Grams = " << result;
            break;

        case 4:
            cout << "Enter Celsius: ";
            cin >> value;                       // Take Celsius value
            result = (value * 9/5) + 32;        // Formula to convert
            cout << "Fahrenheit = " << result;
            break;

        default:
            cout << "Invalid choice";   // If wrong number is entered
    }

    return 0;   // Program ends
}
