#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi graph[1005];
int color[1005];
int dist[1005];

void bfs(){
    dist[0]=0;
    color[0]=1;
    queue<int>q;
    q.push(0);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int j=0; j<graph[u].size(); j++){
            int v=graph[u][j];
            if(color[v]==0){
                dist[v]=dist[u]+1;
                color[v]=1;
                q.push(v);
            }
        }

    }
}

int main(){
    int p,d,t,v1,v2;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &p, &d);
        for(int i=0; i<d; i++){
            scanf("%d %d", &v1, &v2);
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        bfs();
        for(int i=1; i<p; i++){
            printf("%d\n", dist[i]);
        }
        if(t>0)
        printf("\n");

        for(int i=0; i<=p; i++){
            graph[i].clear();
        }
        memset(dist,0,sizeof(dist));
        memset(color,0,sizeof(color));
    }
return 0;
}
