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

bool check(vll &v, int &n, ll &k)
{
    int idx = lower_bound(v.begin(), v.end(), k) - v.begin();
    if(idx == n) return 0;
    F(i, idx, n) if(binary_search(v.begin(), v.end(), v[i] - k)) return 1;
    return 0;
}

int main()
{
    faster();
    int t;
    cin >> t;
    int n;
    ll k;
    while(t--)
    {
        cin >> n >> k;
        vll v(n);
        cin >> v[0];
        bool check0 = 0;
        F(i, 1, n)
        {
            cin >> v[i];
            if(!v[i]) check0 = 1;
            v[i] += v[i - 1];
        }
        if(!k)
        {
            if(check0) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }
        if(binary_search(v.begin(), v.end(), k) || check(v, n, k)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
