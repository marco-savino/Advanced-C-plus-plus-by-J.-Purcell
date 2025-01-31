
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <vector <int>> grid(3, vector<int>(4, 7));   // '4' is the row size while '7' is the default element value

    grid[1].push_back(4);   // Every row can be resizable!

    for (int i=0; i<grid.size(); i++)
    {
        for (int j=0; j<grid[i].size(); j++)
        {
            cout << grid[i][j] << flush;    // 'flush' produces output immediately
        }

        cout << endl;
    }
}