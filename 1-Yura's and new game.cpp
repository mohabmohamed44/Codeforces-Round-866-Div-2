#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <deque>
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
        long long int answer = 0;
        cin >> s;
        if (s[0] == '_')
            answer++;
        if (s.back() == '_')
            answer++;
        for (int i = 0; i < s.size() - 1; i++)
            if (s[i] == '_' && s[i + 1] == s[i])
                answer++;
        if (s == "^")
            answer++;
        cout << answer << endl;
    }
    return 0;
}