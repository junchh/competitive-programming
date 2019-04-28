#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int matrix[105][105], r,c,n;
bool vis[105][105];

int moves[4][2] = {{1, 0}, {0, 1}, {-1,0}, {0,-1}};
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r >> c >> n;

    set<pair<int,int>> q;
    while(n--){
        int a,b;
        cin >> a >> b;
        q.insert(make_pair(a, b));
        vis[a][b]=1;
    }
    int cnt=0;
    queue<pair<int,int>> q2;
    for(auto x:q){
        q2.push(make_pair(x.first, x.second));
    }
    while(!q2.empty()){
        int siz=q2.size();
        while(siz > 0){
            pair<int,int> front = q2.front();
            q2.pop();
            for(int i=0;i<4;i++){
                int nexta = front.first+moves[i][0];
                int nextb = front.second+moves[i][1];

                if(nexta >= 1 && nexta <= r && nextb >= 1 && nextb <= c){
                    if(!vis[nexta][nextb]){
                        vis[nexta][nextb]=1;
                        q2.push(make_pair(nexta, nextb));
                    }
                }
            }
            siz--;
        }
        cnt++;
    }
    cout << cnt << el;
    
    return 0;
}