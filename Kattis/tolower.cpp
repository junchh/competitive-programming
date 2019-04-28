#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int p,t;

bool alllow(string k){
    for(int i=0;i<k.length();i++){
        if(k[i] >= 'A' && k[i] <= 'Z'){
            return false;
        }
    }
    return true;
}

bool firstlow(string k){
    for(int i=0;i<k.length();i++){
        if(i==0){
            if(k[i] >= 'a' && k[i] <= 'z'){
                return false;
            }
        } else {
            if(k[i] >= 'A' && k[i] <= 'Z'){
                return false;
            }
        }
    }
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> p >> t;
    int cnt=0;
    while(p--){
        bool can=true;
        for(int i=0;i<t;i++){
            string m;
            cin >> m;
            if(!alllow(m)){
                if(!firstlow(m)){
                    can=false;
                }
            }
        }
        cnt += (int) can;
    }
    cout << cnt << el;
    return 0;
}