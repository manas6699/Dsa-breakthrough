#include <bits/stdc++.h>
using namespace std;

class solution
{
    public:
    // function to print all thelements of the matrix
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

    void traverseBackOrder(vector<vector<int>>& arr)
    {
        // code to traverse in back order
        int m = arr.size();
        int n = arr[0].size();
        
        
    }
    
};

int main()
{

    vector<int> v1;
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

    solution obj;
    obj.printMatrix(arr);
    return 0;
}