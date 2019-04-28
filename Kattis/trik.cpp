#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

string a;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a;
    int pos=1;

    for(int i=0;i<a.length();i++){
        if(a[i]=='A'){
            if(pos==1){
                pos=2;
            } else if(pos==2){
                pos=1;
            }
        } else if(a[i]=='B'){
            if(pos==2){
                pos=3;
            } else if(pos==3){
                pos=2;
            }
        } else {
            if(pos==1){
                pos=3;
            } else if(pos==3){
                pos=1;
            }
        }
    }
    cout << pos << el;
    return 0;
}