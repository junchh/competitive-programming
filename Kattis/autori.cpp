#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

string s;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << s[i];
        }
    }
    cout << el;
    return 0;
}