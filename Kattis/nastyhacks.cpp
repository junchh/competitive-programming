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
        int a,b,c;
        cin >> a >> b >> c;
        int res1=b-c;

        if(res1>a){
            cout << "advertise" << el;
        } else if(res1==a){
            cout << "does not matter" << el;
        } else {
            cout << "do not advertise" << el;
        }
    }
    return 0;
}