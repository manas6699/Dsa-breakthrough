//cpp code snippts
#include <bits/stdc++.h>
using namespace std;

class solution
{
    public:
    void transposeMatrix(vector<vector<int>>& arr)
    {
        int m = arr.size();
        int n = arr[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = i; j < n; j++)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    void printMatrix(vector<vector<int>>& arr)
    {
        cout << "The elements of the matrix are: " << endl;
        int m = arr.size();
        int n = arr[0].size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main()
{
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
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
    solution obj;
    obj.transposeMatrix(arr);
    obj.printMatrix(arr);

    return 0;
}