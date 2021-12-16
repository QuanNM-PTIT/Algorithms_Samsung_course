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

ll find(ll n, ll k)
{
    ll tmp = pow(2, n - 1);
    if(k == tmp) return n;
    if(k < tmp) return find(n - 1, k);
    return find(n - 1, k - tmp);
}

int main()
{
    faster();
    int t;
    cin >> t;
    ll n, k;
    while(t--)
    {
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
    return 0;
}
