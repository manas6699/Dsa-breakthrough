//Code to count frequency of each character in a string using map in CPP
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1;
    cin >> s1;
    map<char, int> m1;
    for (int i = 0; i < s1.length(); i++)
    {
        m1[s1[i]]++;
    }
    
    for (auto i = m1.begin(); i != m1.end(); i++)
    {
        cout << i->first << " " << i->second << endl;       
        
    }
    
int count1 =  m1.find('b')->second;
int count2 =  m1.find('a')->second;
int count3 =  m1.find('l')->second;
int count4 =  m1.find('o')->second;
int count5 =  m1.find('n')->second;

cout << "<<<<<<<<<<<<<<" << endl;

    int ans = min({count1,count2,count3/2,count4/2,count5});

    cout << min({1,2,3,4,5,6,7,8,9,10}) << endl;
    cout << max({1,2,3,4,5,6,7,8,9,10}) << endl;
    cout << ans << endl;

    pair<int , int> p1;
    bool n1 = m1.find('b')->first;
 return 0;
}