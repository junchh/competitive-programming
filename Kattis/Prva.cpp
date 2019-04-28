#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int r,c, arr[25][25];

bool contains(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='#'){
            return true;
        }
    }
    return false;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r >> c;
    vector<string> g;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=1;i<=r;i++){
        string s = "";
        for(int j=1;j<=r;j++){
            s += arr[i][j];
        }
        int len=2;
        while(len <= c)
    }
    return 0;
}