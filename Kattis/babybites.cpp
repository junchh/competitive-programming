#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n;

int convert(string k){
    int res=0;
    int ten=1;
    for(int i=k.length()-1;i>=0;i--){
        res += ten*(k[i]-'0');
        ten *= 10;
    }
    return res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    bool sense=true;
    for(int i=1;i<=n;i++){
        string a;
        cin >> a;
        if(a!="mumble"){
            int ha = convert(a);
            if(ha!=i){
                sense=false;
            }
        }
    }
    string res = (sense) ? "makes sense" : "something is fishy";
    cout << res << el;
    return 0;
}