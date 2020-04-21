#include "Calculator.h"
#include <iostream>
#include <iomanip>

using namespace myC;


Calculator::Calculator(float a, float b){
    num1 = a;
    num2 = b;

    
};

void Calculator::printPlus(){
    float s;
    s = num1 + num2;
    cout << setprecision(2) << fixed;
    cout << s << endl;
}

void Calculator::printMinus(){
    float s;
    s = num1 - num2;
    cout << setprecision(2) << fixed;
    cout << s << endl;
}

void Calculator::printDivide(){
    float s;
    s = num1 / num2;
    cout << setprecision(2) << fixed;
    cout << s << endl;
}

void Calculator::printMultiply(){
    float s;
    s = num1 * num2;
    cout << setprecision(2) << fixed;
    cout << s << endl;
}