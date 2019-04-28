#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int r,c,rb,cb;
char ar[55][55], baru[1000][1000];

int flr(int a, int b){
    if(a%b==0){
        return a/b;
    } else {
        return a/b+1;
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r >> c >> rb >> cb;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            char k;
            cin >> k;
            ar[i][j]=k;
        }
    }

    for(int i=1;i<=r*rb;i++){
        for(int j=1;j<=c*cb;j++){
            baru[i][j]=ar[flr(i, rb)][flr(j, cb)];
        }
    }

    for(int i=1;i<=r*rb;i++){
        for(int j=1;j<=c*cb;j++){
            cout << baru[i][j];
        }
        cout << el;
    }

    return 0;
}