#include <iostream>
#include <string>
#include "temperature_converter.h"
using namespace std;

int main() {
    double temp;
    int choice;
    bool running = true;


    while (running) {
        cout << "Temperature Converter\n";
        cout << "1. Convert Celsius to Fahrenheit\n";
        cout << "2. Convert Fahrenheit to Celsius\n";
        cout << "3. Convert Celsius to Kelvin\n";
        cout << "4. Convert Kelvin to Celsius\n";
        cout << "5. Convert Kelvin to Fahrenheit\n";
        cout << "6. Convert Fahrenheit to Kelvin\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            double result = celsiusToFahrenheit(temp);
            cout << "Temperature in Fahrenheit: " << result << "F\n";
        } else if (choice == 2) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            double result = fahrenheitToCelsius(temp);
            cout << "Temperature in Celsius: " << result << "C\n";
        } else if (choice == 3) {
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            double result = celsiusToKelvin(temp);
            cout << "Temperature in Kelvin: " << result << " K\n";
        } else if (choice == 4) {
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;
            double result = kelvinToCelsius(temp);
            cout << "Temperature in Celsius: " << result << "C\n";
        } else if (choice == 5) {
            cout << "Enter temperature in Kelvin: ";
            cin >> temp;
            double result = kelvinToFahrenheit(temp);
            cout << "Temperature in Fahrenheit: " << result << "F\n";
        } else if (choice == 6) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            double result = fahrenheitToKelvin(temp);
            cout << "Temperature in Kelvin: " << result << " K\n";
        } else if (choice == 7) {
            running = false;
        } else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}