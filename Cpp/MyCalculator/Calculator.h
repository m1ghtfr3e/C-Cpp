#pragma once
using namespace std;

namespace myC
{

class Calculator{
    private:
        float num1;
        float num2;
        //char operation;

    public:
        Calculator(float a, float b);  //constructor will set and get parameter
        void printPlus();
        void printMinus();
        void printDivide();
        void printMultiply();

};
}