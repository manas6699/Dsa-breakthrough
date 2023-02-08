// Fruit Into Baskets
// https://leetcode.com/problems/fruit-into-baskets/

#include <bits/stdc++.h>
using namespace std;

class solution
{
    public:
    int fruitIntoBaskets(vector<int>& tree)
    {
        int n = tree.size();
        int i = 0;
        int j = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        while(j < n)
        {
            mp[tree[j]]++;
            while(mp.size() > 2)
            {
                mp[tree[i]]--;
                if(mp[tree[i]] == 0)
                {
                    mp.erase(tree[i]);
                }
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};

int main()
{


    return 0;
}