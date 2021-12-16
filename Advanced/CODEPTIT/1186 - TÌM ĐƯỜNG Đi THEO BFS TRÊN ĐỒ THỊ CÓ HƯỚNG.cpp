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

const int MAX = 1e3 + 5;
bool visited[MAX];
vi a[MAX];

void BFS(int u, int trace[])
{
    queue<int> q;
    visited[u] = 1;
    q.push(u);
    int tmp;
    while(!q.empty())
    {
        tmp = q.front();
        q.pop();
        for(int i : a[tmp])
        {
            if(!visited[i])
            {
                visited[i] = 1;
                q.push(i);
                trace[i] = tmp;
            }
        }
    }
}

void findPath(int end, int trace[])
{
    vi path;
    if(!trace[end]) cout << -1;
    else
    {
        do
        {
            path.pb(end);
            end = trace[end];
        }
        while(trace[end]);
        path.pb(end);
        reverse(path.begin(), path.end());
        for(int i : path) cout << i << ' ';
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    int start, end, e, v, x, y;
    while(t--)
    {
        cin >> v >> e >> start >> end;
        memset(visited, 0, v + 5);
        int trace[MAX] = {};
        FOR(i, 1, v) a[i].clear();
        FOR(i, 1, e)
        {
            cin >> x >> y;
            a[x].pb(y);
        }
        BFS(start, trace);
        findPath(end, trace);
        cout << endl;
    }
    return 0;
}
