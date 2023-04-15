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
#define TEST_CASE \
    int t;        \
    cin >> t;     \
    while (t--)   \
    {             \
        solve();  \
    }
using namespace std;

const int Number = 200010;
int n;
int a[Number];
set<int> s;

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    s.clear();
    for (int i = 1; i <= n; i++)
        s.insert(a[i]);

    int smex = 0;
    for (smex = 0;; smex++)
        if (!s.count(smex))
            break;

    int l = 0, r = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] == smex + 1)
        {
            l = i;
            break;
        }

    for (int i = n; i >= 1; i--)
        if (a[i] == smex + 1)
        {
            r = i;
            break;
        }

    s.clear();
    if (l == 0)
        l = n + 1, r = n + 1;
    for (int i = 1; i < l; i++)
        s.insert(a[i]);
    for (int i = r + 1; i <= n; i++)
        s.insert(a[i]);

    int tmex = 0;
    for (tmex = 0;; tmex++)
        if (!s.count(tmex))
            break;

    if (tmex == smex && smex != n)
        printf("Yes\n");
    else
        printf("No\n");
}

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
    TEST_CASE
}