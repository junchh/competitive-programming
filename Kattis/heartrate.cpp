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
        double a,b;
        cin >> a >> b;

        double res2=60*a/b;
        double sel = 60/b;
        cout << fixed << setprecision(4)<< res2-sel << " " << res2 << " " << res2+sel << el;
    }
    return 0;
}