int main()
{
    int a[5][5];
    int value = 1;
    int minrow = 0, maxrow = 4, mincol = 0, maxcol = 4;
    while (value <= 25)
    {
        // dong thap nhat
        for (int i = mincol; i <= maxcol; i++)
        {
            a[minrow][i] = value;
            value++;
        }
        minrow++;
        // cot lon nhat
        for (int i = minrow; i <= maxrow; i++)
        {
            a[i][maxcol] = value;
            value++;
        }
        maxcol--;
        // dong cao nhat
        for (int i = maxcol; i >= mincol; i--)
        {
            a[maxrow][i] = value;
            value++;
        }
        maxrow--;
        // cot thap nhat
        for (int i = maxrow; i >= minrow; i--)
        {
            a[i][mincol] = value;
            value++;
        }
        mincol++;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    system("pause");
}
