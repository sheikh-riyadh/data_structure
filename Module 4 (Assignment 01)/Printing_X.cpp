#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, clm = 1;
    cin >> n;
    char arr[n][n];


    for (int row = 0; row < n; row++)
    {
        for (int c = 0; c <n; c++)
        {
            arr[row][c]=' ';
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int c = clm; c <= clm; c++)
        {
            if (row == n - c)
            {
                arr[row][n-c]='X';
            }
            else
            {
                arr[row][c - 1] = '\\';
                arr[row][n - c] = '/';
            }
        }
        clm++;
    }

    for (int row = 0; row < n; row++)
    {
        for (int clm = 0; clm < n; clm++)
        {
            cout<<arr[row][clm];
        }
        
        cout<<endl;
        
    }
    

    return 0;
}










/* 



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n][n]; // Square array for simplicity

    // Initialize the array with spaces
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = ' ';
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i][i] = '\\'; // Left diagonal
        arr[i][n-i-1] = '/'; // Right diagonal
    }

    arr[n/2][n/2] = 'X'; // Center of the array

    // Print the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}






 */