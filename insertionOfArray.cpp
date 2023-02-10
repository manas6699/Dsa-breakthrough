#include <bits/stdc++.h>
using namespace std;


int main()
{
    // program to insert an element to an array
    int arr[100], n, i, pos, ele;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;
    cout << "Enter the element you want to insert: ";
    cin >> ele;
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    cout << "The array after insertion is: ";
    for (i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}