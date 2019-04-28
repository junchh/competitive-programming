#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

string s;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;

    stack<char> st1;
    st1.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]==st1.top()){
            st1.push(s[i]);
        } else {
            int top1 = st1.top();
            st1.pop();
            if(!st1.empty()){
                int top2 = st1.top();
                if(top2==top1){
                    st1.pop();
                    st1.push(top1);
                } else {
                    st1.pop();
                    st1.push(s[i]);
                }
            } else {
                st1.push(top1);
                st1.push(s[i]);
            }
        }
    }
    if(st1.size()==2){
        int top1 = st1.top();
        st1.pop();
        int top2 = st1.top();
        if(top1!=top2){
            cout << 1 << el;
        } else {
            cout << 0 << el;
        }
    } else {
        cout << 0 << el;
    }
    return 0;
}