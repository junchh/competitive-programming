#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n;
string a[100], b[100];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b+1,b+1+n);
    bool ascend=true;
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){
            ascend=false;
            break;
        }
    }
    bool descend=true;
    for(int i=n;i>=1;i--){
        if(a[n-i+1]!=b[i]){
            descend=false;
            break;
        }
    }
    if(ascend){
        cout << "INCREASING" << el;
    } else {
        if(descend){
            cout << "DECREASING" << el;
        } else {
            cout << "NEITHER" << el;
        }
    }
    return 0;
}