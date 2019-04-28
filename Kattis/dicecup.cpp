#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n,m;

int d[500];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            d[i+j]++;
        }
    }

    int fmax=-1;
    for(int i=1;i<=n*m;i++){
        if(d[i] > fmax){
            fmax=d[i];
        }
    }

    for(int i=1;i<=n*m;i++){
        if(d[i]==fmax){
            cout << i << el;
        }
    }
    return 0;
}