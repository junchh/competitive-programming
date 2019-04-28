#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt=0;
    int n;
    cin >> n;
    while(n--){
        int g;
        cin >> g;
        if(g<0){
            cnt++;
        }
    }
    cout << cnt << el;
    return 0;
}