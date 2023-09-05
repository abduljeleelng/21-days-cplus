#include <iostream>

int main()
{
    enum Days {Sunday, Monday, Tuesday,Wednesday,Thursday,Friday,Saturday};
    Days today;
    today = Monday;
    const unsigned short int studentNumber =10;

    if(today == Sunday || today==Saturday)
    {
        std::cout << "\n It's a cheerful weeked !\n" << "studdent number is : \t" << studentNumber;
    }else
    {
        std::cout << "\n Chief, Back to work ! \n" << "studdent number is : \t" << studentNumber;
    }

}