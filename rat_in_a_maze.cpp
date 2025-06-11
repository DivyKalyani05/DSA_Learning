class Solution {
  public:
    void solve(vector<vector<int>>& maze,int x,int y,vector<string>&ans,vector<vector<int>>& visited,string& cur){
        if (x==maze.size()-1 && y==maze.size()-1){
            ans.push_back(cur);
            return;
        }
        // right
        if (x+1<maze.size() && maze[x+1][y]!=0 && visited[x+1][y]!=1){
            cur+="D";
            visited[x+1][y]=1;
            solve(maze,x+1,y,ans,visited,cur);
            cur.pop_back();
            visited[x+1][y]=0;
        }
        //left
        if (x-1>=0 && maze[x-1][y]!=0 && visited[x-1][y]!=1){
            cur+="U";
             visited[x-1][y]=1;
            solve(maze,x-1,y,ans,visited,cur);
            cur.pop_back();
            visited[x-1][y]=0;
            
        }
        
        if (y+1<maze.size() && maze[x][y+1]!=0 && visited[x][y+1]!=1){
            cur+="R";
            visited[x][y+1]=1;
            solve(maze,x,y+1,ans,visited,cur);
            cur.pop_back();
            visited[x][y+1]=0;
        }
        
         if (y-1>=0 && maze[x][y-1]!=0 && visited[x][y-1]!=1){
            cur+="L";
            visited[x][y-1]=1;
            solve(maze,x,y-1,ans,visited,cur);
            cur.pop_back();
            visited[x][y-1]=0;
        }
        
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        
        int n = maze.size();
        int x=0;
        int y=0;
        vector<vector<int>> visited(n, vector<int>(n, 0));;
         vector<string> ans;
         string cur="";
         if (maze[0][0]=0){
            return ans;
        }
        
        solve (maze,x,y,ans,visited,cur);
        visited[0][0] = 1; // 🔧 FIX: mark start as visited
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
