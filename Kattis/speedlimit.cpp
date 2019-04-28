#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007


 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while(n!=-1){
        int sum=0;
        int k=0;
        for(int i=1;i<=n;i++){
            int a,b;
            cin >> a >> b;
            sum += a* (b-k);
            k = b;
        }
        cout << sum << " miles" << el;
        cin >> n;
    }
    return 0;  
}