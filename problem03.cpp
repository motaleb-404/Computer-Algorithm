#include <iostream>
using namespace std;
void readMatrix(int matrix[][100], int m, int n)
{
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(const int matrix[][100], int m, int n)
{
    cout << "Matrix:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int matrix[100][100];

    readMatrix(matrix, m, n);

    displayMatrix(matrix, m, n);

    return 0;
}

