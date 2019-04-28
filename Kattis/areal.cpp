#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

double l;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> l;

    double sisi = sqrt(l);
    double kel = 4*sisi;
    cout << fixed << setprecision(15) << kel << el;
    return 0;
}