#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int s;
        ll n,b;
        cin >> s >> b >> n;

        ll res=0;
        while(n!=0){
            res += (n%b)*(n%b);
            n /= b;
        }
        cout << s << " " << res << el;
    }
    return 0;
}