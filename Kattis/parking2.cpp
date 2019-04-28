#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int t;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int fmax=-1;
        int fmin=10000;
        while(n--){
            int k;
            cin >> k;
            fmax=max(fmax, k);
            fmin=min(fmin, k);
        }
        cout << 2*(fmax-fmin) << el;
    }
    return 0;
}