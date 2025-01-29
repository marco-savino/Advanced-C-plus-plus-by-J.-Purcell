
#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

int main()
{
    string strFileContent;
    string strFileName = "file.txt";
    fstream xFile;  // ifstream

    xFile.open(strFileName, ios::in);

    if (xFile.is_open() == false)
    {
        cout << "File " << strFileName << " is not open" << endl;
        return -1;
    }

    cout << "Reading file: \n\n";

    while (xFile)
    {
        getline(xFile, strFileContent, ':');    // ':' act as delimiter (and skips it), 
                                                // so '\n' is no more the default delimiter!

        int iNumber;
        xFile >> iNumber;   // xFile is just an internal file cursor and if you expect to find something
                            // pointed out, you grab it as you need it

        xFile >> ws;    // This sorcery here goes over White Spaces if encountered      
        
        cout << "'" << strFileContent << "'" << "'" << iNumber << "'" << endl;
    }

    xFile.close();

    return 0;
}