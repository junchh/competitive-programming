#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int l,r;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> l >> r;
    if(l==r){
        if(l!=0){
        cout << "Even " << 2*l << el;
        } else {
            cout <<"Not a moose" << el;
        }
    } else {
        cout << "Odd " << 2*max(l, r) << el;
    }
    return 0;
}