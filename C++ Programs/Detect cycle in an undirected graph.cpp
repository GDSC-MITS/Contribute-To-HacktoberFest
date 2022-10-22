  public:
    // Function to detect cycle in an undirected graph.
    bool bfs( int V,vector<int> adj[],vector<int>& visited,int t){
        queue<int> q;
        vector<int> parent(V,-1);
        for(int i=0;i<V;i++)
        parent[i]=i;
        q.push(t);
        visited[t]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto nbr: adj[node]){
              //  cout<<node<<"->";
                if(visited[nbr] && nbr!=parent[node])
                    return true; //truen implies cycle
                else if(!visited[nbr]){    
                    q.push(nbr);
                    
                    visited[nbr]=1;
                    parent[nbr]=node;
                }
              
            }
            
        }
        
        return false;
    }
    
    bool dfs( int V,vector<int> adj[],vector<int>& visited,int t,int parent){
        visited[t]=1;
        for(auto nbr: adj[t]){
            if(visited[nbr] && nbr!=parent)
                return true; //true implies cycle
            else if(!visited[nbr]){
               if(dfs(V,adj,visited,nbr,t))
               return true;;}
        }
        return false;
    }
            
        
    bool isCycle(int V, vector<int> adj[]) {
        // Code 
        vector<int> visited(V+1,0);
        bool ans=false;
        for(int i=0;i<V;i++){
            if(!visited[i]){
              //  cout<<i<<"           >> ";
                ans=ans|| dfs(V,adj,visited,i,-1);}
        }
        return ans;
    }
};
