#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <deque>
#include <bits/stdc++.h>
#include <ostream>
#define ll long long
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define sh short
#define lli long long int
using namespace std;

void debugMode()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int main()
{
    debugMode();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s += s;
        long long int ans = 0, ones = 0;
        for (long long int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                ones++;
            else
                ones = 0;
            ans = max(ans, ones);
        }
        if (ans == s.size())
            ans--;
        long long int ansf = ((ans + 1) / 2) * ((ans + 2) / 2);
        cout << ansf << endl;
    }
    return 0;
}