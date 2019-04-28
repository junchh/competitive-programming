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
        int n;
        cin >> n;
        if(n >= 5){
            cout << 0 << el;
        } else {
            switch(n){
                case 1:
                    cout << 1 << el;
                    break;
                case 2:
                    cout << 2 << el;
                    break;
                case 3:
                    cout << 6 << el;
                    break;
                case 4:
                    cout << 4 << el;
                    break;
            }
        }
    }
    return 0;
}