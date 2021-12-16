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

const ll mod = 1e9 + 7;

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<ll, vll, greater<ll>> pq;
        ll x = 0;
        FOR(i, 1, n)
        {
            cin >> x;
            pq.push(x);
        }
        ll sum = 0;
        while(pq.sz > 1)
        {
            x = 0;
            x += pq.top();
            x %= mod;
            pq.pop();
            x += pq.top();
            x %= mod;
            pq.pop();
            pq.push(x);
            sum += x;
            sum %= mod;
        }
        cout << sum << endl;
    }
    return 0;
}
