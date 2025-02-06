/*
    std::dqeque is a double-ended queue, where you can add elements ad the front and the back
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test 
{
    int id;
    string name;

public:

    Test(int id, string name) : id(id), name(name) {}

    void print()
    {
        cout << "id: " << id << "; name: " << name << endl;
    }

    bool operator< (const Test &other) const
    {
        return id < other.id;
    }

    friend bool compare(const Test &a, const Test &b);  // "Class, if you see this function it's a friend, please allow it to access your private members"
};

bool compare(const Test &a, const Test &b)
{
    return a.id < b.id;
}

int main()
{
    vector<Test> tests;

    tests.push_back(Test(56, "Mark"));
    tests.push_back(Test(13, "Eve"));
    tests.push_back(Test(34, "Norman"));

    // sort(tests.begin(), tests.end());    // Here sort() is using overrided '<' operator

    // sort(tests.begin(), tests.begin() + 3);  // Sorts the first three elements only

    sort(tests.begin(), tests.end(), compare);  // Just wow, you can put here the right function pointer and it works



    for (vector<Test>::iterator it = tests.begin(); it < tests.end(); it++)
    {
        it->print();
    }
}

