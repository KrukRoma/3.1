#include <iostream>

using namespace std;

int main()
{
    //11
    int number1;
    cout << "Enter number: ";
    cin >> number1;

    for (int i = 2; i <= number1 / 2; ++i) 
    {
        if (number1 % i == 0) 
            cout << i << endl;
    }

    //12
    int number2, number3;
    cout << "Enter first number: ";
    cin >> number2;
    cout << "Enter second number: ";
    cin >> number3;

    for (int i = 1; i <= min(number1, number2); ++i)
    {
        if (number1 % i == 0 && number2 % i == 0) 
            cout << i << " ";
    }
}
