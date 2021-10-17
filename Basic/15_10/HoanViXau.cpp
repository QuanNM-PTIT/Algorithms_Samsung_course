#include<bits/stdc++.h>
using namespace std;
int n, A[12], B[12]; string s;
void in(){
    for(int i = 1; i <= n; i++){
        cout << s[A[i]-1];
    }
    cout << " ";
}
void Try(int i){
    int j;
    for(j = 1; j <= n; j++){
        if(B[j] == 0){
            A[i] = j;
            B[j] = 1;
            if(i == n) in();
            else Try(i+1);
            B[j] = 0;
        }
    }
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> s; n = s.length();
        Try(1);
        cout << endl;
    }
}
