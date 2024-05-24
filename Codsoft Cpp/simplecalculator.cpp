#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    // defining variables 
    string operation;
    double number1, number2;

    ///getting user's input
    cout << " Enter First Number : ";
    cin >> number1;
    cout <<" Enter Operation(+, -, *, /): ";
    cin>> operation;
    cout << "Enter Second Number: ";
    cin >> number2;

    //if else statement checking entered operation
    if (operation == "+") {
        cout << number1 + number2;
    } 
    
    else if(operation == "-") {
        cout << number1 - number2;
    } 
    
    else if(operation == "*") {
        cout << number1 * number2;
    } 
    
    else if(operation == "/") {
        cout << number1 / number2;
    }

    else{
        cout << "Not a recognized operation!";
    }

    return 0;

}