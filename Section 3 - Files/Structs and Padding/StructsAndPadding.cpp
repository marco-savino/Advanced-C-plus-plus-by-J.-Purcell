/*
    The difference between a class and a struct is that the struct has public members by default.
    We cant use objects to store data in structs because the actual data is stored somewhere in the heap by pointers.

    Structs are padded: when they occupy 61 B, 64 B are actually stored. This is a problem for files.
*/

#include <iostream>

using namespace std;

#pragma pack(push, 1)   // The padding on stack is now settled one by one Byte
struct Person 
{
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)   // Padding is now restored

int main()
{
    cout << sizeof(Person) << endl;     // Actal dimension of Person is 62 B, but with padding enabled is 64 B

    return 0;
}