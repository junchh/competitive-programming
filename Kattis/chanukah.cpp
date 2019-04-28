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
        int a,b;
        cin >> a >> b;

        cout << a << " " << (b*(b+1))/2 + b << el;
    }
    return 0;
}