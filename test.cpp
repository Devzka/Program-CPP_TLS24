#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int choice;
    char repeat;

    do{
    cout << "1. Temperature Conversion" << endl;
    cout << "2. Area and Circumference of a Circle" << endl;
    cout << "3. Basic Calculator (+, -, *, /)" << endl;
    cout << "Choose a calculator type (1, 2 , or 3): "; 
    cin >> choice;
    cout << endl;
    
        switch(choice){
        case 1:
            double celcius, fahrenheit, kelvin;
            char choice; 
    
            cout << "1. Celcius" << endl;
            cout << "2. Fahrenheit" << endl;
            cout << "3. Kelvin" << endl;
            cout << "Which temp do you want to convert? 1, 2 or 3: ";
            cin >> choice;
            cout << endl;
    
            if (choice == '1')
            {
            cout << "Enter Temperature (⁰C): ";
            cin >>  celcius;

            fahrenheit = (9.0/5.0 * celcius) + 32;

            cout << "Temperature (⁰F): ";
            cout << fixed << setprecision(2) << fahrenheit << "⁰F" << endl;
    
            kelvin = 273 + celcius;
    
            cout << "Temperature (⁰K): ";
            cout << fixed << setprecision(2) << kelvin << "⁰K" << endl;
            }

            if (choice == '2')
            {
            cout << "Enter Fahrenheit (⁰F): ";
            cin >>  fahrenheit;

            celcius = 5.0/9.0 * (fahrenheit - 32);

            cout << "Temperature (⁰C): ";
            cout << fixed << setprecision(2) << celcius << "⁰C" << endl;
    
            kelvin = 5.0/9.0 * (fahrenheit - 32) + 273;
    
            cout << "Temperature (⁰K): ";
            cout << fixed << setprecision(2) << kelvin << "⁰K" << endl; 
            }
    
            if (choice == '3')
            {
            cout << "Enter Temperature (⁰K): ";
            cin >>  kelvin;

            fahrenheit = 9.0/5.0 * (kelvin - 273) + 32;

            cout << "Temperature (⁰F): ";
            cout << fixed << setprecision(2) << fahrenheit << "⁰F" << endl;
    
            celcius = kelvin - 273;
    
            cout << "Temperature (⁰C): ";
            cout << fixed << setprecision(2) << celcius << "⁰C" << endl;
            }
            break;
        
        case 2:
            double radius, area, circumference;
            cout << "Enter the radius of the Circle: ";
            cin >> radius;

            area = M_PI * pow(radius, 2);
            circumference = 2 * M_PI * radius;

            cout << "Area of the Circle: " << area << endl;
            cout << "Circumference of the Circle: " << circumference << endl;
            cout << endl;
            break; 
        
        case 3:
            char operation;
            double n1, n2;

            cout << "Enter operation (+, -, *, /): ";
            cin >> operation;

            cout << "Enter two numbers (devide using space): ";
            cin >> n1 >> n2;

            switch(operation)
            {
                case '+':
                    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
                    break;
                case '-':
                    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
                    break;
                case '*':
                    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
                    break;
                case '/':
                    if (n2 != 0)
                        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
                    else
                        cout << "Error! Division by zero. ";
                    break;
                default:
                    cout << "Error! invalid operation." << endl;                                                            
            }         
    } cout << endl;
      cout << "Do you want to use another calculator? Y/N: ";
      cin >> repeat;
      cout << endl;

    }while(repeat == 'y' || repeat == 'Y');

    return 0;
}