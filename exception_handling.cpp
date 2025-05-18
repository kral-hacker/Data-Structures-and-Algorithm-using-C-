#include <iostream>
using namespace std;



int main(){
    int num, den;
    cout << "Enter the numerator and the denominator " << endl;
    cin >> num;
    cin >> den;

    try{
        if (den == 0)
        throw den;
        int result = num/den; // include that part of the code where u feel the exception might occur
        cout << result << endl; 

    }
    // every try block is followed by the catch block
    catch(int ex){
        cout << "Divide by zero not allowed." << endl;
    }
}