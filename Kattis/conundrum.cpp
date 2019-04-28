#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string res= "";
    for(int i=1;i<=s.length()/3;i++){
        res += "PER";
    }
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=res[i]){
            cnt++;
        }
    }
    cout << cnt << el;
    return 0;
}