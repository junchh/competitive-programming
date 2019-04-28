#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int x,y;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> x >> y;
    if(x>0 && y > 0){
        cout << 1 << el;
    } else if(x>0 && y <0){
        cout << 4 << el;
    } else if(x<0 && y > 0){
        cout << 2 << el;
    } else {
        cout << 3 << el;
    }
    return 0;
}