#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int p,n;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> p >> n;
    set<string> s;
    int day=-1;
    for(int i=1;i<=n;i++){
        string a;
        cin >> a;
        if(s.count(a)==0 && s.size()==p-1){
            day=i;
        }
        s.insert(a);
    }
    if(day==-1){
        cout << "paradox avoided" << el;
    } else {
        cout << day << el;
    }
    return 0;
}