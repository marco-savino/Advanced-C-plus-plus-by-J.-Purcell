/*
    When deleting an array, you must use [].
    There are no return codes for error in constructors, so there you need exceptions.
    Every kind of exception is a subclass of the std::exception class.
*/

#include <iostream>

using namespace std;

class CanGoWrong 
{
public:
    CanGoWrong()
    {
        int* pcArray = new int[999999999999]; // VS Code does not throw any exception wtf
        delete pcArray; 
    }
};

int main()
{
    try {
        CanGoWrong xCanGoWrong;
    }
    catch(...)
    {
        cout << "Some error" << endl;
    }

    cout << "Everything's fine!" << endl;

    return 0;
}