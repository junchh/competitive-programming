#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

string a;
int b;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b;
    if(a=="OCT" && b==31){
        cout << "yup" << el;
    } else if(a=="DEC" && b==25){
        cout << "yup" << el;
    } else {
        cout << "nope" << el;
    }
    return 0;
}