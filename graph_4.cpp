 bool dfs(vector<int>g[], int start , vector<bool>&vis , vector<bool>&anc )
    {
        vis[start]=true;
        anc[start]=true;
        for(auto node:g[start])
        {
            if(!vis[node]&&dfs(g,node,vis,anc))
            {
                return true;
            }
            else if(anc[node]||node==start)
            {
                return true;
            }
        }
        anc[start]=false;
        return false;
    }


	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<bool>vis(V,false);
	   	vector<bool>anc(V,false);
	   	for(int i=0;i<V;i++)
	   	{
	   	    if(!vis[i]&&dfs(adj,i,vis,anc))
	   	    {
	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};
