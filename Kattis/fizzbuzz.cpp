#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int x,y,n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> x >> y >> n;
    for(int i=1;i<=n;i++){
        if(i%x==0){
            if(i%y==0){
                cout << "FizzBuzz" << el;
            } else {
                cout << "Fizz" << el;
            }
        } else {
            if(i%y==0){
                cout << "Buzz" << el;
            } else {
                cout << i << el;
            }
        }
    }
    return 0;
}