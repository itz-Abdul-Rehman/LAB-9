#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r1, r2, c1, c2;
    cout << "Enter Rows of first matrix: ";
    cin >> r1;
    cout << "Enter Columns of first matrix: ";
    cin >> c1;
    cout << "Enter Rows of Second matrix: ";
    cin >> r2;
    cout << "Enter Columns of Second matrix: ";
    cin >> c2;

    if (c1 != r2)
    {
        cout << "The Columns of first matrix are not equal to rows of second matrix.";
    }
    else
    {
        vector<vector<int>> A(r1, vector<int>(c1));
        vector<vector<int>> B(r2, vector<int>(c2));
        vector<vector<int>> res(r1, vector<int>(c2, 0));

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "Enter value of A" << i + 1 << j + 1 << ":";
                cin >> A[i][j];
            }
        }
        cout << "\nReview Matrix A: \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << "Enter value of B" << i + 1 << j + 1 << ":";
                cin >> B[i][j];
            }
        }
        cout << "\nReview Matrix B:\n";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << B[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Resulting Matrix: \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    res[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}