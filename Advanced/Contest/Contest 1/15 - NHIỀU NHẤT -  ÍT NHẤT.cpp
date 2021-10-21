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
#define PI 3.141592653589793238
#define endl '\n'

bool check(int a[], int n, int m, ll mid, int stu = 1, int sum = 0)
{
    F(i, 0, n)
    {
        if(a[i] > mid) return 0;
        if(sum + a[i] > mid)
        {
            ++stu;
            sum = a[i];
            if(stu > m) return 0;
        }
        else sum += a[i];
    }
    return 1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        if(n < m)
        {
            cout << -1 << endl;
            continue;
        }
        int a[n];
        ll r = 0;
        F(i, 0, n)
        {
            cin >> a[i];
            r += a[i];
        }
        ll l = 0, ans = -1, mid;
        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if(check(a, n, m, mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    return 0;
}

