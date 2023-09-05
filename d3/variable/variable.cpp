#include <iostream>

void sizeOfVariable () 
{
    /**
     * @brief List the size of variables
     * 
    */

    using std::cout;
    cout << "The size of an int is : \t\t"
        << sizeof(int) << " bytes. \n";
    cout << "The size of a short int  is : \t\t"
        << sizeof(short) << "bytes. \n";
    cout << "The size of a long int is : \t\t"
        << sizeof(long) << "bytes. \n";
    cout << "The size of a char is : \t\t"
        << sizeof(char) << "bytes. \n";
    cout << "The size of a float is : \t\t"
        << sizeof(float) << "bytes. \n";
    cout << "The size of a double is : \t\t"
        << sizeof(double) << "bytes. \n";
    cout << "The size of a bool is : \t\t"
        << sizeof(bool) << "bytes . \n";

}

int main()
{
    using std::cout;
    using std::cin;
    std::cout << "Determin the size of variable by function sizeOfvarible() \n";
    sizeOfVariable();
    bool male = false;
    bool female = false;
    cout << "Are your a male ? ";
    cin >> male;
    cout << "this size of input " << sizeof(male) << " value "<< male << "\n";
    cout << "Are your a female ? \n";
    cin >> female;
    cout << "this size of input " << sizeof(female) << " value "<< female << "\n";
    return 0;

}