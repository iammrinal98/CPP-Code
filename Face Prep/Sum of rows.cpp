#include<iostream>

using namespace std;

int main()
{
    int m, n, row, col, sum = 0, row_ind = 0, col_ind = 0;
   
    cin >> m >> n;
    int row_arr[m];
    int i, j;
    int mat[m][n];
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            cin >> mat[i][j];
    }

    int z = 0;

    //cout << "\nSum of rows is ";
    for(row=0; row<m; row++)
    {
        sum = 0;
        for(col=0; col<n; col++)
        {
            sum += mat[row][col];
        }
        cout << sum <<"\n";
        row_arr[z++] = sum;
    }
    //cout << endl;
    
    return 0;
}