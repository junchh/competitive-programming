#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

double cost;
int n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> cost >> n;
    double res=0;
    while(n--){
        double a,b;
        cin >> a >> b;
        res += a*b;
    }
    res *= cost;
    cout << fixed << setprecision(7) << res << el;
    return 0;
}