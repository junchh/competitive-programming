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
        set<string> h;
        while(n--){
            string a;
            cin >> a;
            h.insert(a);
        }
        cout << h.size() << el;
    }
    return 0;
}