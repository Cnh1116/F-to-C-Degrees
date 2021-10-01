#include <iostream>
using namespace std;

float FarentoCelcius(float F)
{
    return ((F-32)/1.8);
}

float CelsiustoFaren(float C)
{
    return ((1.8*C)+32);
}

int main()
{
    float F, C;
    int selection;

    cout << "************************************************" << endl;
    cout << "Hello! This program allow the user to convert " << endl;
    cout << "temperatures from Celsius to Fahrenheit" << endl;
    cout << "************************************************" << endl << endl;

    cout << "Is 1. or 2. your desired action?" << endl;
    cout << "1. Fahrenheit to Celsius." << endl;
    cout << "2. Celsius to Fahrenheit." << endl;
    cin >> selection;

    switch (selection)
    {
        case 1:
            {
                cout << "Please enter in your temperature in Fahrenheit degrees: ";
                cin >> F;
                cout << endl;
                cout << "Your temperature converted into Celsius degrees is: " << FarentoCelcius(F) << "°";
                break;
            }


        case 2:
            {
                cout << "Please enter in your temperature in Celsius degrees: ";
                cin >> C;
                cout << endl;
                cout << "Your temperature converted into Fahrenheit degrees is: " << CelsiustoFaren(C) << "°";
            }

    }





}
