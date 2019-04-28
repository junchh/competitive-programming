#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n,m;

char conv(int k){
    return (char) k + 'a';
}

int conv2(char k){
    return (int) k - 'a';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a = "snosy";
    string b = "again";
    for(int i=0;i<5;i++){
        int k = (conv(a[i])+conv(b[i]))%26;
        if(k<0){
            k+=26;
        }
        cout << conv(k);
    }
    return 0;
}