#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        bool can=false;
        if(a*b==c){
            can=true;
        }
        if(a+b==c){
            can=true;
        }
        if(a-b==c){
            can=true;
        }
        if(b-a==c){
            can=true;
        }
        if(a%b==0){
            if(a/b==c){
                can=true;
            }
        }
        if(b%a==0){
            if(b/a==c){
                can=true;
            }
        }
        string res = (can) ? "Possible" : "Impossible";
        cout << res << el;
    }
    return 0;
}