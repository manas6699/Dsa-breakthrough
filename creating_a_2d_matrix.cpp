#include <bits/stdc++.h>
using namespace std;

class Solution {
    // set matrix zero
    public:
    void setMatrixZeros(vector<vector<int>>& matrix)
    {
        int col0 = 0 ; 
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i = 0; i < rows; i++)
        {
            if(matrix[i][0] == 0)
            {
                col0 = 1;
            }
            for(int j = 1; j < cols; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i = rows - 1; i >= 0; i--)
        {
            for(int j = cols - 1; j >= 1; j--)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            if(col0 == 1)
            {
                matrix[i][0] = 0;
            }
        }
    }

    void setMatrixZeroSol2(vector<vector<int>>& matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> x , y;
        // find zero
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(matrix[i][j] == 0)
                {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }

        // set rows 0
        for(int i = 0; i < x.size(); i++)
        {
            for(int j = 0; j < cols; j++)
            {
                matrix[x[i]][j] = 0;
            }
        }

        // set columns zero
        for(int i = 0; i < y.size(); i++)
        {
            for(int j = 0; j < rows; j++)
            {
                matrix[j][y[i]] = 0;
            }
        }
    }
    
};

int main()
{
    // create a 2d matrix using vector
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m ;
    cout << "Enter the number of columns: ";
    cin >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    cout << "Enter the elements of the matrix: " << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    // print the matrix
    cout << "The matrix is: " << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // print the modified matrix
    Solution obj;
    
    obj.setMatrixZeroSol2(arr);
    cout << "The modified matrix is: " << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
    
    return 0;
}