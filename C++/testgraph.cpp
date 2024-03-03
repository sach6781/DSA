#include<bits/stdc++.h>
using namespace std;

void dfs(int src, vector<int> adj[], vector<int>& visited){
	cout << src << endl;
	visited[src] = 1;
	for(auto it:adj[src]){
		if(!visited[it]){
			dfs(it, adj, visited);
		}
	}
}


int main(){
	int n;
	int u, v;
	cin >> n;
	vector<int> adj[n];
	for(int i=0;i<n;i++){
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> visited(n+1, 0);
	for(int i=0;i<n;i++){
		if(!visited[i]){
			dfs(i, adj, visited);
		}
	}
}