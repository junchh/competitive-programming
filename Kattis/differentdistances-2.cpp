#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

double x1,y,x2,y2,p;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> x1;
    while(x1!=0){
        cin >> y >> x2 >> y2 >> p;

        double a = pow(abs(x1-x2), p);
        double b = pow(abs(y-y2), p);
        double res = pow(a+b, 1.0/p);
        cout <<fixed << setprecision(10) << res << el;
        cin >> x1;
    }
    return 0;
}