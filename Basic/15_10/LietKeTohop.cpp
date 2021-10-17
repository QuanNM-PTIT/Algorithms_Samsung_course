#include<bits/stdc++.h>
using namespace std;
int n, k, C[30];
void in(){
    for(int i=1;i<=k;i++) cout << C[i];
    cout << " ";
}
void Try(int i){
    int j;
    for(j = C[i-1] + 1; j <= n-k+i; j++){
        C[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}
