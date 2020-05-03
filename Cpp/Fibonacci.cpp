#include <iostream>
using namespace std;


int fib(int);

int main(){

    // How many rounds of sequence
    int rounds;
    
    cout << "Which range: " << endl;
    cin >> rounds;

    // Call fibonacci function
    fib(rounds);

    return 0;
}


int fib(int rounds){

    // First to terms of fib sequence
    int n1, n2, count;
    n1 = 0;
    n2 = 1;
    count = 0;

    while (count < rounds){
        cout << n1 << endl;
        int nth = n1 + n2;
        n1 = n2;
        n2 = nth;
        count += 1;
    }

    return 0;
}