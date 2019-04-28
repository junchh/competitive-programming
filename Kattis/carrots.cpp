#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n,p;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> p;
    while(n--){
        string a;
        getline(cin, a);
        while (a.length()==0 ) 
            getline(cin, a); 
    }
    cout << p << el;
    return 0;
}