/*
    <fstream> is the library dedicated to files.
    ofstream is the object to handle output files.

    close() writes the output on the file, saves it and then closes the file.

    Instead of ofstream, it can be userd fstream but then it needs to specificy that's output ios::out
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string strFileName = "file.txt";
    fstream xFile;  // ofstream

    xFile.open(strFileName, ios::out);  // .open(strFileName);

    if (xFile.is_open() == false)
    {
        cout << "File " << strFileName << " is not open" << endl;
        return -1;
    }

    xFile << "Hello world!" << endl << "I'm a file :D" << endl;

    xFile.close();

    return 0;
}