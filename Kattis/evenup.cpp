/**
 * @author: Jenniekim
 * @date  : 01-30-2019
 **/
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
    stack<int> st;
    int cnt=n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(st.empty()){
            st.push(x);
        } else {
            if((st.top()+x)%2==0){
                st.pop();
                cnt -= 2;
            } else {
                st.push(x);
            }
        }
    }
    cout << cnt << el;
 
    return 0;
}