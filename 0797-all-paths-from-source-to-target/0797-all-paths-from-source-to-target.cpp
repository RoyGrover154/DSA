class Solution {
    private:
        void dfs(vector<vector<int>>&graph, vector<vector<int>>&result,vector<int>temp, int u, int target){

            temp.push_back(u);

            if(u == target){
                result.push_back(temp);
                return;
            }
            else{
            for(int &v : graph[u]){
                dfs(graph, result, temp, v, target);
            }           
            }
        temp.pop_back();
        }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<vector<int>>result;

        int source = 0;
        int target = n-1;

        vector<int>temp;


        dfs(graph, result, temp, source, target);

        return result;

    }
};