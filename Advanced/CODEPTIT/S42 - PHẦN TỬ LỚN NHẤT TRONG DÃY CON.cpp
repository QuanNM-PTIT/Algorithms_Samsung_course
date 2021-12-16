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
    int n, k;
    while(t--)
    {
        cin >> n >> k;
        int a[n + 1];
        FOR(i, 1, n) cin >> a[i];
        deque<int> dq;
        int ans[n + 5];
        FOR(i, 1, n)
        {
            while(dq.size() && a[dq.back()] <= a[i]) dq.pop_back();
            dq.push_back(i);
            if(dq.front() + k <= i) dq.pop_front();
            if(i >= k) ans[i] = a[dq.front()];
        }
        FOR(i, k, n) cout << ans[i] << ' ';
        cout << endl;
    }
    return 0;
}
