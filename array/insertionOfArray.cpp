#include <bits/stdc++.h>
using namespace std;

int main()
{

    //insertion of array
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of the array are: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}