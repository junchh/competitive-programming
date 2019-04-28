#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int arr[5][4];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int fmax=-1;
    int idx=-1;
    for(int i=0;i<5;i++){
        int res=0;
        for(int j=0;j<4;j++){
            int x;
            cin >> x;
            res+=x;
        }
        if(res > fmax){
            fmax = res;
            idx = i+1;
        }
    }
    cout << idx << " " << fmax << el;
    return 0;
}