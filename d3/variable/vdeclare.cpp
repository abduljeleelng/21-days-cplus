#include <iostream>


using namespace std;

//Create a variable definition alias using typedef
typedef unsigned short int USHORT;
typedef unsigned long int ULONG;


int main()
{
    unsigned short int width=5, length;
    length = 10;
    //Find the area of lenth and width
    unsigned short int Area = (width*length);
    cout << "Width : " << width << "\n";
    cout << "Length : " << length << endl;
    cout << "Area : " << Area << endl;

    cout << "Typedef Usage \n\n\n";
    USHORT len =5,bre=5,area;
    area = (len*bre);

    cout << "Typed def area == : " << area;
    
    return 0; 
}