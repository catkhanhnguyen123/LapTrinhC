#include <iostream>

using namespace std;

void print(int arr[][5])
{
    int value = 1;
    int minrow = 0, maxrow = 4, mincol = 4, maxcol = 4;

    while (value != 25)
    {
        for (int i = mincol; i <= maxrow; i++)
        {
            arr[minrow][i] = value;
            value++;
        }
        minrow++;

        for (int i = minrow; i <= maxrow; i++)
        {
            arr[i][maxcol] = value;
            value++;
        }
        maxcol--;

        for (int i = maxcol; i >= mincol; i--)
        {
            arr[minrow][i] = value;
            value++;
        }
        maxrow--;

        for (int i = maxrow; i >= minrow; i--)
        {
            arr[i][mincol] = value;
            value++;
        }
        mincol++;
}

int main()
{
    int arr[5][5];

    print(arr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

