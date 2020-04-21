# include <iostream>
using namespace std;


int fac(int n){
    if (n <= 1){
        return n;
    }
    else {
        return (n * fac(n-1));
    }
}


int main(){
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    
    cout << "The factorial of " << number << " is: " << fac(number) << endl;
    
    return 0;
}
