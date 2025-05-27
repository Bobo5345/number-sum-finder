#include <iostream>
using namespace std;
int main() 
{
    // Declaring variables
    int lim, sum = 0;

    // Asking user to input the value we need to find sum upto
    cout << "Enter the number you need to find sum upto: ";
    cin >> lim;

    // Using n*(n+1)/2 Equation to find sum
    sum = (lim*(lim+1))/2;

    // Printing result
    cout << "\nThe sum is: " << sum;
    return 0;
}