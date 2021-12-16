#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        int MAX = 1;
        int l, r;
        F(i, 1, s.length())
        {
            l = i - 1;
            r = i;
            while (l >= 0 && r < s.length() && s[l] == s[r])
            {
                --l;
                ++r;
            }
            --r;
            ++l;
            if(s[l] == s[r] && r - l + 1 > MAX) MAX = r - l + 1;
            l = i - 1;
            r = i + 1;
            while (l >= 0 && r < s.length() && s[l] == s[r])
            {
                --l;
                ++r;
            }
            --r;
            ++l;
            if(s[l] == s[r] && r - l + 1 > MAX) MAX = r - l + 1;
        }
        cout << MAX << endl;
    }
    return 0;
}
