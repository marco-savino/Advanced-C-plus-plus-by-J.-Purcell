
/*
    Use exceptions for errors where the program cannot recover from.
*/

#include <iostream>

using namespace std;


void mightGoWrong()
{
    bool error1 = false;
    bool error2 = true;

    if (error1)
    {
        throw "Something went worng...";
    }

    if (error2)
    {
        throw string("Something else went wrong...");   // Use the constructor to throw objects
    }
}

void useMightGoWrong()
{
    mightGoWrong();     // The exceptions get thrown until they're handled
}

int main()
{
    try {
        useMightGoWrong();
    }
    catch(int e)
    {
        cout << "Error code: " << e << endl;
    }
    catch (char const * e) {
        cout << "Error message: " << e << endl;
    }
    catch (string &e) {     // We need to catch objects by references 

        // Don't worry about the usual empty stack reference, 
        // it's hanbdled by the exception specification
        
        cout << "String error message: " << e << endl;
    }
    
    cout << "Still running!" << endl;

    return 0;
}

