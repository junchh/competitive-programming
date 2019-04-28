#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int l,h;

bool check(int g){
    int a = g;
    set<int> hm;
    while(a!=0){
        hm.insert(a%10);
        if(a%10==0){
            return false;
        }
        a/=10;
    }
    if(hm.size()==6){
        bool can=true;
        for(auto x:hm){
            if(g%x!=0){
                can=false;
                break;
            }
        }
        return can;
    } else {
        return false;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> l >> h;
    int cnt=0;
    for(int i=l;i<=h;i++){
        if(check(i)){
            cnt++;
        }
    }
    cout << cnt << el;
    return 0;
}