#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

string a,b;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b;
    if(a.length() >= b.length()){
        cout << "go" << el;
    } else {
        cout << "no" << el;
    }
    return 0;
}