// C++ program for Merge Sort
#include <iostream>
using namespace std;


void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

void merge(int arr[] , int l ,int mid , int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)    
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        arr[k] = b[j];
        k++;
        j++;
        
    }
    
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    

}


void merge_sort(int arr[] , int l , int r)
{
    if ((l < r))
    {
        int mid = (l + r) / 2;
        merge_sort(arr , l , mid);
        merge_sort(arr , mid + 1 , r);
        merge(arr , l , mid , r);
    }
    
}


int main()
{
	int n;
    int l = 0;

    cout << "Enter the value of n : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


	cout << "Given array is \n";
	printArray(arr, n);
    cout << endl;

    merge_sort(arr , l , n - 1);
    printArray(arr , n);

	return 0;
}

