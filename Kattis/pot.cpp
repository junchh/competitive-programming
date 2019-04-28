#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n;

ll pows(ll a, ll b){
    ll res = 1;
    for(int i=1;i<=b;i++){
        res *= a;
    }
    return res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    ll res=0;
    while(n--){
        ll a;
        cin >> a;
        res += pows(a/10, a%10);
    }
    cout << res << el;
    return 0;
}