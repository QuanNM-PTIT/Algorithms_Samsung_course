#include<bits/stdc++.h>
using namespace std;
int n, C[10][10], A[10], Cot[10], Xuoi[20], Nguoc[20], maxx;
void capnhat(){
    int i,j,t=0;
    for(i=1;i<=8;i++)
        t = t+ C[i][A[i]];
    if(t > maxx) maxx = t;
}
void Try(int i){
    int j;
    for(j = 1; j <= n; j++){
        if(!Cot[j] && !Xuoi[i-j+n] && !Nguoc[i+j-1]){
            A[i] = j;
            Cot[j] = 1; Xuoi[i-j+n] = 1; Nguoc[i+j-1] = 1;
            if(i == n) capnhat();
            else Try(i+1);
            Cot[j] = 0; Xuoi[i-j+n] = 0; Nguoc[i+j-1] = 0;
        }
    }
}
main(){
    int t,i,j; cin >> t;
    while(t--){
        for(i=0;i<=8;i++){ A[i] = 0; Cot[i] = 0;}
        for(i=0;i<=16;i++){ Xuoi[i] = 0; Nguoc[i] = 0;}
        for(i=1;i<=8;i++) for(j=1;j<=8;j++) cin >> C[i][j];
        n = 8; maxx = 0;
        Try(1);
        cout << maxx << endl;
    }
}
