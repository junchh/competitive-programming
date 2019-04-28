/**
 * @author: Jenniekim
 * @date  : 01-30-2019
 **/
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
int r,n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r >> n;

    int q[r+1];
    memset(q, 0, sizeof q);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        q[x]=1;
    }
    bool found=false;
    int index=-1;
    for(int i=1;i<=r;i++){
        if(!q[i]){
            found=true;
            index=i;
            break;
        }
    }
    if(found){
        cout << index << el;
    } else {
        cout << "too late" << el;
    }

 
    return 0;
}