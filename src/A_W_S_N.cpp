#include<iostream>
#include<string>
#include<queue>
#include<string.h>

using namespace std;

int dist[25][25];
int dp[1<<19][19];
int l;

// Bitmask DP

int recur(int mask,int id) {

    if(mask == ((1<<(l-2))-1)) return dist[id+2][1];
    if(dp[mask][id] != -1) return dp[mask][id];

    int ret = 1e9;

    for(int i=2;i<l;i++)
        if((mask&(1<<(i-2))) == 0)
            ret = min(ret,dist[id+2][i] + recur(mask|(1<<(i-2)),i-2));

    return dp[mask][id] = ret;
}



int main()
{
    int test;
    cin >> test;
    while(test--){
        int n,m;
        string str[110];
        int check[25][2],mat[110][110];
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        memset(dp, 0, sizeof(dp));
        memset(dist, 0, sizeof(dist));
        
        cin >> n >> m;

    for(int i=0;i<n;i++) cin >> str[i];

    l=2;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(str[i][j] == 'T') check[0][0] = i,check[0][1] = j;
            else if(str[i][j] == 'W') check[1][0] = i,check[1][1] = j;
            else if(str[i][j] == 'C') check[l][0] = i,check[l++][1] = j;


    for(int i=0;i<25;i++) for(int j=0;j<25;j++) dist[i][j] = 1e9;

    for(int i=0;i<l;i++) {
        for(int j=0;j<n;j++) for(int k=0;k<m;k++) mat[j][k] = 1e9;

        // BFS

        queue<int> q;
        q.push(check[i][0]);
        q.push(check[i][1]);
        mat[check[i][0]][check[i][1]] = 0;

        while(!q.empty()) {
            int x,y,d;
            x = q.front();
            q.pop();
            y = q.front();
            q.pop();
            d = mat[x][y];

            for(int j=0;j<4;j++)
                if(x+dx[j]>=0 && x+dx[j]<n && y+dy[j]>=0 && y+dy[j]<m)
                    if(str[x+dx[j]][y+dy[j]] != '#' && mat[x+dx[j]][y+dy[j]] > d+1) {
                        mat[x+dx[j]][y+dy[j]] = d+1;
                        q.push(x+dx[j]);
                        q.push(y+dy[j]);
                    }
        }

        for(int j=0;j<l;j++) dist[i][j] = mat[check[j][0]][check[j][1]];

    }

    memset(dp,-1,sizeof dp);

    int ans = 1e9;

    for(int i=2;i<l;i++) ans = min(ans,dist[0][i]+recur((1<<(i-2)),i-2));

    if(l == 2) ans = dist[0][1];

    if(ans == 1e9) cout << "Mission Failed!" << endl;
    else cout << ans << endl;

}
return 0;
}

