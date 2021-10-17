#include<bits/stdc++.h>
using namespace std;
int n, A[20];
void in(){
    In ra cau hinh hien tai;
}
void Try(int i){
    int j;
    for(j = 1; j <= nj; j++){
        if(chon duoc j){
           Gan vi tri i theo j;
           if(i == n) in();
           else Try(i+1);
           //Xu ly sau de quy
        }
    }
}
main(){
    cin >> n;
    Try(1);
}
