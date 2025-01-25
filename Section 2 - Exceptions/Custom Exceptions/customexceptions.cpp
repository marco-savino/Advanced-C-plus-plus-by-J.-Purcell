/*
    Custom exceptions must be derived from the std::exception class.
    what() method can be overrided.
    You can declare what kind of exceptiona  method can throw, but in C++ is unnecessary.
*/

#include <iostream>

using namespace std;

class MyException : public exception
{
public:
    // Override what() method
    virtual const char * what() const throw() // Here you declare that your method throws (returns) exceptions
    {
        return "Something has gone wrong!";
    }
};

class Test
{
public:
    void goesWrong() throw(MyException) // VS Code compiler wants to declare the type of exception 
        // that can be thrown, otherwise it's a warning
    {
        throw MyException();    // Throw an exception by its constructor
    }
};


int main()
{
    Test test;

    try
    {
        test.goesWrong();
    }
    catch(MyException &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}