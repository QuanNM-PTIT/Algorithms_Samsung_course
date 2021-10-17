#include<bits/stdc++.h>
using namespace std;
int n, k, s, C[30], ans;
void xuly(){
    int t = 0;
    for(int i=1;i<=k;i++) t += C[i];
    if(t == s) ans++;
}
void Try(int i){
    int j;
    for(j = C[i-1] + 1; j <= n-k+i; j++){
        C[i] = j;
        if(i == k) xuly();
        else Try(i+1);
    }
}
main(){
    while(1){
        cin >> n >> k >> s;
        if(!n && !k && !s) break;
        ans = 0;
        Try(1);
        cout << ans << endl;
    }
}

