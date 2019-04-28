#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int l,d,x;

int summ(int y){
    int res=0;
    while(y!=0){
        res+=y%10;
        y/=10;
    }
    return res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> l >> d >> x;
    for(int i=l;i<=d;i++){
        if(summ(i)==x){
            cout << i << el;
            break;
        }
    }
    for(int i=d;i>=l;i--){
        if(summ(i)==x){
            cout << i << el;
            break;
        }
    }
    return 0;
}