#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define el '\n'
#define MOD 1000000007

int matrix[105][105], r,c,n;
bool vis[105][105];
int dist[105][105];
pair<int,int> moves[4];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r >> c >> n;
    moves[0] = make_pair(1,0);
    moves[1] = make_pair(0,1);
    moves[2] = make_pair(-1,0);
    moves[3] = make_pair(0,-1);
    set<pair<int,int>> q;
    while(n--){
        int a,b;
        cin >> a >> b;
        q.insert(make_pair(a, b));
        vis[a][b]=1;
    }
    int cnt=1;
    queue<pair<int,int>> q2;
    for(auto x:q){
        q2.push(make_pair(x.first, x.second));
        dist[x.first][x.second]=1;
    }
    while(!q2.empty()){
            pair<int,int> front = q2.front();
            q2.pop();
            for(int i=0;i<4;i++){
                int nexta = front.first+moves[i].first;
                int nextb = front.second+moves[i].second;
                if(nexta >= 1 && nexta <= r && nextb >= 1 && nextb <= c){
                    if(!vis[nexta][nextb]){
                        vis[nexta][nextb]=1;
                        dist[nexta][nextb] = dist[front.first][front.second]+1;
                        q2.push(make_pair(nexta, nextb));
                    }
                }
            }
    }

    int fmax=-1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            fmax = max(fmax, dist[i][j]);
        }
    }
    cout << fmax << el;
    return 0;
}