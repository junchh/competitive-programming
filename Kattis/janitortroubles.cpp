#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

double a,b,c,d,s;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c >> d;

    s = (a+b+c+d)/2;

    double luas = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    cout << fixed << setprecision(15) << luas << el;
    return 0;
}