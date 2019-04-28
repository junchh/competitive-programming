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
    bool exist=false;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1] && s[i]=='s'){
            exist=true;
            break;
        }
    }
    string res = (exist) ? "hiss" : "no hiss";
    cout << res << el;
    return 0;
}