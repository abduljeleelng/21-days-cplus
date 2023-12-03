#include <iostream>

using namespace std;

void escapeChar(){
    cout << "This is the Bell character \a \n";
    cout << "This is the backspace \b  \n";
    cout << "This is the form feed \f  \n";
    cout << "This is the New line \n  \n";
    cout << "This is the Carriage return \r  \n";
    cout << "This is the Tab \t  \n";
    cout << "This is the Vertical tab \v  \n";
    cout << "This is the single qoute \'  \n";
    cout << "This is the Double qoute \"  \n";
    cout << "This is the Question mark \?  \n";
    cout << "This is the backslash \\  \n";
    cout << "This is the Octa notation \000  \n";
    //cout << "This is the Hexadeciaml \xhhh ";

}


int main(){
    cout << "Main function ==";
    escapeChar();
    cout << "After escape character function";
    return 0;
}