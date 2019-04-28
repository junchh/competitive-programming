#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
#define PI 3.14159265
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double x,y;
    cin >> x >> y;
    double res = x/ (sin(y*PI/180.0));
    cout << ceil(res) << el;
    return 0;
}