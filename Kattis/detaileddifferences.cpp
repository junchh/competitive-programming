#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while(n--){
        string a,b;
        cin >> a >> b;

        cout << a << el;
        cout << b << el;

        for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                cout << '.';
            } else {
                cout << '*';
            }
        }
        cout << el;
        cout << el;
    }
    return 0;
}