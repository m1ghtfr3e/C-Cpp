#include "Calculator.cpp"
#include <iostream>

using namespace std;
using namespace myC;


int main(){
    float num1, num2;
    char op;
    
    while (true){
        cout << "\nCalculate: " << endl;
        cin >> num1 >> op >> num2;
        cout << "\n";

        Calculator calc(num1, num2);

        if (op == '+'){
            calc.printPlus();
        }

        if (op == '-'){
            calc.printMinus();
        }
        if (op == '/'){
            calc.printDivide();
        }
        if (op == '*'){
            calc.printMultiply();
        }
    }

    return 0;
}
