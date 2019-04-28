#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double denom = 0;
    double nomi = 0;
    cin >> n;
    while(n--){
        double k,l;
        cin >> k >> l;
        denom += k;
        nomi += l;
    }
    double res = (nomi) / (60*denom);
    if(res <= 1){
        cout << "measurement error" << el;
    } else {
        cout << fixed << setprecision(9) << res << el;
    }
    return 0;
}