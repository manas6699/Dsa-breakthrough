#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p,*q;

    p = new int [5];
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9;

    cout << "Values in size 5 array \n";
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << p[i] << endl;
    }
    q = new int [10];

    for(int i = 0; i < 5 ; i++)
    {
        q[i] = p[i];
    }
    // delete p;
    // p = q;
    // q = NULL;
    //q = p;
    delete p;
    p = q;
    q = NULL;
    

    cout << "After copying \n";
    p[5] = 11; 
    p[6] = 13;
    p[7] = 15;
    p[8] = 17;
    p[9] = 19;
    
    for(int i = 0 ; i < 10 ; i++)
    {
        cout << p[i] << endl;
    }
    return 0;
}