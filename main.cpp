//
//  main.cpp
//  Practice-CPP
//
//  Created by Elijah Varela on 10/21/24.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    
    
    
    
    return 0;
    
//    int temperatures[] = {60, 80, 90};
//    
//    double sum {};
//    double average {};
//    short count = sizeof(temperatures) / sizeof(int);
//    for (int i = 0; i < count; i++) {
//        sum += temperatures[i];
//        average = sum / count;
//    }
//    
//    cout << sum << endl;
//    cout << average << endl;
//        
    
    // Factorio program
//    int userNumber;
//    cout << "Enter your number to factorio: ";
//    cin >> userNumber;
//    
//    int result = 1;
//    for (int i = 0; i <= userNumber; i++) {
//        
//        if (i > 1)
//            result *= i;
//        else
//            result = 1;
//    }
//    
//    cout << userNumber << "!: " << result << endl;
//    

    
    
    // chaining strings + variables
//    int x = 10;
//    int y = 20;
//    cout << "x = " << x << endl
//         << "y = " << y << endl;
    
    // exercise: output
//    double salesTotal = 95000;
//    cout << "Total Sales: $" << salesTotal << endl;
//    
//    const double stateTaxRate = .04;
//    double stateTax = salesTotal * stateTaxRate;
//    cout << "State Tax: $" << stateTax << endl;
//
//    const double countyTaxRate = .02;
//    double countyTax = salesTotal * countyTaxRate;
//    cout << "County Tax: $" << countyTax << endl;
//
//    double totalTax = stateTax + countyTax;
//    cout << "Total Tax: $" << totalTax << endl;
    
    
    // reading from the console
//    cout << "Enter a value: ";
//    int value;
//    cin >> value;
//    cout << value << endl;
    
    //Program that converts a temperature from fahrenheit to celsius
    // Prompt user for Fahrenheit temperature
//    int number;
//    cout << "Fahrenheit: ";
//    cin >> number;
//    
//    // °C = (°F - 32) ÷ 1.8
//    double celsius = (number - 32) / 1.8;
//    cout << "Celsius: " << celsius << endl;
 
    
    
//    double result = pow(2, 3);
//    cout << result << endl;
//
    
    //Exercise: write a program to calculate the area of a circle

//    cout << "Whats the radius of the circle?";
//    double userRadius;
//    cin >> userRadius;
//    const double pi = 3.14;
//    
//    double userArea = pi * pow(userRadius, 2);
//    
//    cout << "The area of the circle is " << userArea << endl;
    
//    double price = 99.99;
//    
//    // float values need F at the end
//    float interestRate = 3.67F;
//    
//    // long value needs L at end
//    long fileSize = 90000L;
//    
//    // needs single quotes
//    char letter = 'c';
//    
//    bool isValid = false;
    
    // incorrect initializing
    // int number;
    
    // correct initializing
//    int number = 0;
//    int number {};
//    
//    
//    cout << number;
    // generate 2 random dice rolls
//    const short minValue = 1;
//    const short maxValue = 6;
//    
//    srand(time(0));
//    short diceOne = (rand() % (maxValue - minValue + minValue)) + minValue;
//    short diceTwo = (rand() % (maxValue - minValue + minValue)) + minValue;
//    cout << diceOne << ", " << diceTwo << endl;
    
    
//    bool isNewUser = false;
//    // boolalpha allows to print false instead of 0
//    cout << boolalpha << isNewUser << endl;
    
    // string input/output
//    string name;
//    cout << "Enter your name: " << endl;
//    getline(cin, name);
//    cout << "Hi " << name << endl;
    
    //Write program to get street address then print it
//    string street;
//    cout << "Street: " << endl;
//    getline(cin, street);
//    
//    string city;
//    cout << "City: " << endl;
//    getline(cin, city);
//    
//    string state;
//    cout << "State: " << endl;
//    getline(cin, state);
//    
//    string zipCode;
//    cout << "Zip Code: " << endl;
//    getline(cin, zipCode);
//    
//    
//    cout << street << endl;
//    cout << city << ", " << state << ", " << zipCode << endl;
    
//    int numbers[] = {10, 20, 30, 40, 50};
//    cout << numbers[0] << endl;
//    
//    // array excerise
//    string names[3];
//    
//    cout << "First name: ";
//    getline(cin, names[0]);
//
//    cout << "Second name: ";
//    getline(cin, names[1]);
//    
//    cout << "Third name: ";
//    getline(cin, names[2]);
//
//    cout << "First Name: " << names[0] << endl;
    
    
//    // typcasting section
//    int x = 1;
//    double y = 2.0;
//    
//    //c++ casting
//    double z = x + static_cast<int>(y); // changes y to an int
//    cout << z << endl;
    
//
    
    
    

//    int temperature = 100;
//    if (temperature < 60)
//        cout << "Cold" << endl;
//    else if (temperature < 90)
//        cout << "Nice" << endl;
//    else
//        cout << "Hot" << endl;
//
    
//    double tierOneCommission = 0.10;
//    double tierTwoCommission = 0.15;
//    double tierThreeCommission = 0.20;
//    
//    double workerCommission;
//    
//    
//    
//    double workerSales;
//    cout << "Total Sales: ";
//    cin >> workerSales;
//    
//    if (workerSales <= 10000)
//        workerCommission = tierOneCommission * workerSales;
//    else if (workerSales <= 15000)
//        workerCommission = tierTwoCommission * workerSales;
//    else
//        workerCommission = tierThreeCommission * workerSales;
//    
//    cout << "Commission: " << workerCommission << endl;
    
//    double firstNumber;
//    cout << "First number: ";
//    cin >> firstNumber;
//    
//    double secondNumber;
//    cout << "Second number: ";
//    cin >> secondNumber;
//    
//    double largerNumber = (firstNumber > secondNumber) ? firstNumber : secondNumber;
//    
//    cout << "Larger number: " << largerNumber << endl;
    
    
    
//    cout << "1- Create account" << endl
//         << "2- Change password" << endl
//         << "3- Quit" << endl
//         << "Select an option: ";
//    
//    short input;
//    cin >> input;
//    
////    if (input == 1)
////        cout << "You selected 1";
////    else if (input == 2)
////        cout << "You selected 2";
////    else
////        cout << "GoodBye";
//
//    // switch statement
//    switch (input) {
//        case 1:
//            cout << "You selected 1";
//            break;
//        case 2:
//            cout << "You selected 2";
//            break;
//        default:
//            cout << "GoodBye";
//    }
    
//    double firstNumber;
//    cout << "First Number: ";
//    cin >> firstNumber;
//    
//    double secondNumber;
//    cout << "Second Number: ";
//    cin >> secondNumber;
//    
//    short operatorNumber;
//    cout << "1. +" << endl
//         << "2. -" << endl
//         << "3. *" << endl
//         << "4. /" << endl
//         << "Enter Selection: ";
//    
//    cin >> operatorNumber;
//    
//    
//    double result;
//    switch (operatorNumber) {
//        case 1:
//            result = firstNumber + secondNumber;
//            break;
//        case 2:
//            result = firstNumber - secondNumber;
//            break;
//        case 3:
//            result = firstNumber * secondNumber;
//            break;
//        case 4:
//            result = firstNumber / secondNumber;
//            break;
//        default:
//            cout << "invalid operator" << endl;
//    }
//    
//    cout << "Result: " << result << endl;
    
    // Loops
    
//    for (int i = 5; i > 0; i--)
//        cout << i << endl;
    
    
    
    
    // don't delete
    
}
