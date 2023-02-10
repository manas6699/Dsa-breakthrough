#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Merge Sorted Array
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {2, 5, 6};
    int m = 3, n = 3;
    int i = m - 1, j = n - 1, k = m + n - 1;
    int original_size = k;
    while (i >= 0 && j >= 0)
    {
        if (v1[i] > v2[j])
        {
            v1[k] = v1[i];
            i--;
        }
        else
        {
            v1[k] = v2[j];
            j--;
        }
        k--;
    }
    while ((j >= 0) )
    {
        v1[k] = v2[j];
        j--;
        k--;
    }
    while (i>=0)
    {
        v1[k] = v1[i];
        i--;
        k--;
    }
    
    for (int i = 0; i < original_size; i++)
    {
        cout << v1[i] << " ";
    }

 return 0;
}