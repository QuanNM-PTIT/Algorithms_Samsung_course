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

bool cmp(pair <int, int> a,pair <int, int> b)
{
    if(a.fi < b.fi) return 1;
    if(a.fi == b.fi && a.se < b.se) return 1;
    return 0;
}

int main()
{
    faster();
    int t, n, x, y, ans, idx;
    cin >> t;
    while(t--)
    {
        vector<pair<int, int>> v;
        cin >> n;
        F(i, 0, n)
        {
            cin >> x >> y;
            v.pb({x, y});
        }
        sort(v.begin(), v.end(), cmp);
        ans = 1;
        idx = 0;
        F(i, 1, n)
        {
            if(v[i].fi >= v[idx].se)
            {
                ++ans;
                idx = i;
            }
            else if(v[i].se < v[idx].se) idx = i;
        }
        cout << ans << endl;
    }
    return 0;
}
