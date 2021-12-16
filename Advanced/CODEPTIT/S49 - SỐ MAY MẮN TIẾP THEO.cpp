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

ll tmp;

void calc(int k)
{
    --k;
    if(!k)
    {
        tmp = tmp * 10 + 4;
        return;
    }
    if(k==1)
    {
        tmp = tmp * 10 + 7;
        return;
    }
    calc(k >> 1);
    if(k & 1) tmp = tmp * 10 + 7;
    else tmp = tmp * 10 + 4;
}
 
int main()
{
    faster();
    vll v;
    FOR(i, 1, 1023)
    {
        tmp = 0;
        calc(i);
        v.pb(tmp);
    }
    ll a, b;
    cin >> a >> b;
    if(a == b) return cout << v[lower_bound(v.begin(), v.end(), a) - v.begin()], 0;
    ll sum = 0;
    ll idx = lower_bound(v.begin(), v.end(), a) - v.begin();
    while(a <= b)
    {
        if(v[idx] >= b)
        {
            sum += (b - a + 1) * v[idx];
            break;
        }
        else sum += (v[idx] - a + 1) * v[idx];
        a = v[idx] + 1;
        idx = lower_bound(v.begin(), v.end(), a) - v.begin();
    }
    cout << sum;
    return 0;
}
