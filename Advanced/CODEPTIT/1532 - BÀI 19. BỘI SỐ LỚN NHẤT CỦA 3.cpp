// Created by Nguyễn Mạnh Quân

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
#define endl '\n'

int main()
{
    faster();
    int t, n, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vi v[3];
        int sum = 0;
        F(i, 0, n)
        {
            cin >> x;
            v[x % 3].pb(x);
            sum += x;
        }
        if(v[0].sz == 0)
        {
            if((v[1].sz == 0 && v[2].sz < 3) || (v[2].sz == 0 && v[1].sz < 3))
            {
                cout << -1 << endl;
                continue;
            }
        }
        F(i, 0, 3) sort(v[i].begin(), v[i].end(), greater<int>());
        if(sum % 3 == 1) v[1].pop_back();
        else if(sum % 3 == 2) v[2].pop_back();
        vi ans;
        F(i, 0, 3) for(int i : v[i]) ans.pb(i);
        sort(ans.begin(), ans.end(), greater<int>());
        for(int i : ans) cout << i;
        cout << endl;
    }
    return 0;
}
