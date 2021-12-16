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
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        ll sum = 0, tmp;
        vll b;
        for(int &i : a)
        {
            cin >> i;
            sum += i;
        }
        ll sqr = sqrt(sum);
        F(i, 1, sqr)
        {
            if(sum % i == 0)
            {
                b.pb(i);
                b.pb(sum / i);
            }
        }
        if(sqr * sqr == sum) b.pb(sqr);
        sort(b.begin(),b.end());
        for(ll i : b)
        {
            tmp = 0;
            F(j, 0, n)
            {
                tmp += a[j];
                if(tmp > i) break;
                else if(tmp == i) tmp = 0;
            }
            if(!tmp)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
