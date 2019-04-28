#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

ll n,w, sum;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> w >> n;
    sum = 0;
    while(n--){
        ll a,b;
        cin >> a >> b;
        sum += a*b;
    }
    cout << sum/w << el;
    return 0;
}