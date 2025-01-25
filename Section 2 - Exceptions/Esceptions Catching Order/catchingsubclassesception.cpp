#pragma warning(push)
#pragma warning(disable: 4286)

#include <iostream>
#include <exception>

using namespace std;

void goesWrong()
{
    bool bDetectError1 = false;
    bool bDetectError2 = true;

    if (bDetectError1) throw exception();

    if (bDetectError2) throw bad_alloc();
}



int main()
{
    try
    {
        goesWrong();
    }
    catch(exception& e)     // This thing here will catch any subclass of std::esception
    {
        std::cerr << "Catching esception: " << e.what() << '\n';
    }
    catch(bad_alloc& e)     // Compiler here tells that std::bad_alloc is already caught in std::exception above
    {
        std::cerr << "Catching bad alloc: " << e.what() << '\n';
    }

    
    return 0;
}

#pragma warning(pop)