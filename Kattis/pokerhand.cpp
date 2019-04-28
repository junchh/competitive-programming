#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<char, int> mp;
    for(int i=0;i<5;i++){
        string s;cin >> s;
        if(mp.find(s[0])==mp.end()){
            mp[s[0]]=1;
        } else {
            mp[s[0]]++;
        }
    }
    int fmax=-1;
    for(auto x:mp){
        fmax = max(fmax, x.second);
    }
    cout << fmax << el;
    return 0;
}