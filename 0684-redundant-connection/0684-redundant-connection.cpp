class DisjointSet{
    public:
    vector<int> size,parent;

    DisjointSet(int n){
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<n;i++){
            parent[i] = i;
        }
    }
        int findUp(int node){
            if(node == parent[node])
            return node;

            return parent[node] = findUp(parent[node]);
        }

        bool unionBySize(int u,int v){
            int upU = findUp(u);
            int upV = findUp(v);
            if(upU == upV)
            return false;

            if(size[upU]<size[upV]){
                parent[upU] = upV;
                size[upV] += size[upU];
            }
            else{
                parent[upV] = upU;
                size[upU]+=size[upV];
            }
            return true;
        }

    };
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        DisjointSet ds(edges.size());
        for(auto it:edges){
            if(!ds.unionBySize(it[0],it[1])){
                return {it[0],it[1]};
            }
        }
        return {-1,-1};
    }
};