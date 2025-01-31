/*
    Lists are vectors which you can insert items everywhere around the list.
    Vector can be only pushed back.

    Lists are doubly linked and uses pointers to go across themselves.
    On a list we must use an iterator. 

    When using insert() you must specify the position (with an iterator) and the value.
    When using erase() you invalidate the iterator, be careful! But it return the new correct iterator
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> xList;

    xList.push_back(1);
    xList.push_back(2);
    xList.push_back(3);
    xList.push_back(4);

    list<int>::iterator piIt = xList.begin();

    while (piIt != xList.end())
    {
        if (*piIt == 2)
            piIt = xList.erase(piIt);   // Remember to get back the new iterator!
        else
            piIt++;
    }

    for (list<int>::iterator it = xList.begin(); it != xList.end(); it++)
        cout << *it << endl;

    return 0;
}
