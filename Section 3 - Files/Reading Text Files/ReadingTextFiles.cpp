/*
    Instead of xInFile.eof(), it can be juts called xInFile and use it as a bool, because it is overloeaded with some 
    code that just do this.
*/

#include <iostream>
#include <string>   // It's needed for getline()
#include <fstream>

using namespace std;

int main()
{
    string strFileContent;
    string strFileName = "../Writing Text Files/file.txt";
    fstream xFile;  // ifstream

    xFile.open(strFileName, ios::in);  // .open(strFileName);

    if (xFile.is_open() == false)
    {
        cout << "File " << strFileName << " is not open" << endl;
        return -1;
    }

    // xFile >> strFileCOntent ---> reads all the file at once

    cout << "Reading file: \n\n";

    while (xFile)   // same as 'xFile.eof() == false'
    {
        getline(xFile, strFileContent);
        cout << strFileContent << endl;
    }

    xFile.close();

    return 0;
}