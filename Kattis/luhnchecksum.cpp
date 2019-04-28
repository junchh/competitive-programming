#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int t;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        reverse(a.begin(), a.end());
        int sum=0;
        for(int i=0;i<a.length();i++){
            if(i%2==0){
                sum += (int) (a[i] - '0');
            } else {
                int g = (a[i]-'0');
                g *= 2;
                if(g <= 9){
                    sum += g;
                } else {
                    sum += 1+(g%10);
                }
            }
        }
        if(sum%10==0){
            cout << "PASS" << el;
        } else {
            cout << "FAIL" << el;
        }
    }
    return 0;
}