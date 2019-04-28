#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a;
    cin >> a;
    ll res = 1LL<<a;
    res += 1;
    cout << res*res << el;
    return 0;
}