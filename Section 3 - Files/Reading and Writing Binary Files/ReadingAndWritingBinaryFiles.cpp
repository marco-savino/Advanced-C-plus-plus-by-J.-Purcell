
#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)  
struct Person 
{
    char name[50];
    int age;
    double height;
};
#pragma pack(pop)  

int main()
{
    Person xPerson = {
        "Frodo",
        220,
        0.8
    };

    string strFileName = "file.bin";
    ofstream xOutFile; //fstream xFile;

    xOutFile.open(strFileName, ios::binary);

    if (xOutFile.is_open() == false)
        return 1;

    xOutFile.write(reinterpret_cast<char *>(&xPerson), sizeof(Person));

    // &                ---> Pass by reference, in this way write() writes exactly those bytes
    // char *           ---> Provides the right memory cell dimension of one byte
    // reinterpret_cast ---> C++ 11 cast for pointers
    // sizeof()         ---> char * dimension (1 Byte) * number of "cells" of Person

    xOutFile.close();


    ifstream xInFile;

    xInFile.open(strFileName, ios::binary);

    if (xInFile.is_open() == false)
        return 1;

    Person xOtherPerson = {};   // Struct empty initialization

    xInFile.read(reinterpret_cast<char *>(&xOtherPerson), sizeof(Person));

    cout << xOtherPerson.name << "; " << xOtherPerson.age << "; " << xOtherPerson.height << ";";

    xInFile.close();

    return 0;
}