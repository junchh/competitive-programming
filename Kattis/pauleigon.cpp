#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

ll n,p,q;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> p >> q;

    ll res = p+q+1;
    if(res%(2*n) >= 1 && res%(2*n) <= n){
        cout << "paul" << el;
    } else {
        cout << "opponent" << el;
    }
    return 0;
}