#include <bits/stdc++.h>

int main(){
    for(int i = 1; i <= n; i++)
        dist[i] = INF;

    dist[source] = 0;
    queue<int> q;
    q.push(source);
    while(!q.empty()){
        int current = q.front();
        q.pop();
        for(int next : adj_list[current]){
            if(dist[next] == INF){
                dist[next] = dist[current] + 1;
                q.push(next);
            }
        }
    }
}
