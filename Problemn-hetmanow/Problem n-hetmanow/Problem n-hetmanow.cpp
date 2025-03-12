#include <iostream>
using namespace std;
const int wiersze=8;
const int kolumny=8;
int main()
{
    int table[wiersze][kolumny] = {
        {2,2,2,2,2,2,2,2},
        {2,2,2,2,2,2,2,2},
        {2,2,2,2,2,2,2,2},
        {2,2,2,2,2,2,2,2},
        {2,2,2,2,2,2,2,2},
        {2,2,2,2,2,2,2,2},
        {2,2,2,2,2,2,2,2},
        {2,2,2,2,2,2,2,2},
    };
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0;j < kolumny;j++) {
            cout<<table[i][j]<<"\t";
        }
        cout << "\n";
    }
    return 0;
}