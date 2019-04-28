#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int t;

int conv(string k){
    int res=0;
    int ten=1;
    for(int i=k.length()-1;i>=0;i--){
        res += ten*(k[i]-'0');
        ten *= 10;
    }
    return res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for(int i=1;i<=t;i++){
        int n;
        cin >> n;
        priority_queue<int> pq1;
        priority_queue<int> pq2;

        while(n--){
            string a;
            cin >> a;

            switch(a[a.length()-1]){
                case 'B':
                    pq1.push(conv(a.substr(0, a.length()-1)));
                    break;
                case 'R':
                    pq2.push(conv(a.substr(0, a.length()-1)));
                    break;
            }
        }

        int siz=0;
        int len=0;
        while(!pq1.empty() && !pq2.empty()){
            if(!pq1.empty()){
                int top1 = pq1.top();
                pq1.pop();
                siz++;
                len+=top1;
            } 
            if(!pq2.empty()){
                int top2 = pq2.top();
                pq2.pop();
                siz++;
                len+=top2;
            }
        }
        cout << "Case #" << i << ": " << len-siz << el;
    }
    return 0;
}