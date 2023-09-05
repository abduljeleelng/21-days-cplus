#include <iostream>

using namespace std;

void message(int a, int b)
{
    /***
     * This function named message add two dynamic numbers together, 
     * The input numbers comes from the main function and accept integers.
    */
    int sum = a+b; //sum the two input value
    cout << "The sum of " << a << " and " << b << " = " << a+b;
    cout << "\n";
}

int multiply()
{
    /**
     * @brief Multiplication function
     * The methods accepts three dynamic integer values from from users
     * and multiply the three numbers. 
     * 
     */
    int a,b,c;
    cout << "Enter three(3) numbers to multiply \n\n";
    cout << "Enter the first number \n";
    cin >>a;
    cout << "Enter the second number \n";
    cin >>b;
    cout << "Enter the third number \n";
    cin >>c;
    cout << "The multiplication of " << a << "," << b << ", and " << c << " = " << a*b*c << "\n\n\n";
    return (a*b*c);
}

int main()
{
    //Main function
    int a =5, b =6;
    int total;
    message(a,b);
    total = multiply();
    cout << "The multiplication of three number is " << total;
    return 0;
}