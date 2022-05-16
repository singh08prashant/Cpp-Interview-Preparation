class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int ans=1,m=grid.size(),n=grid[0].size();
        if(grid[0][0]||grid[m-1][n-1]) return -1;
        if(m==1&&n==1&&grid[0][0]==0) return 1;
        queue<pair<int,int>> q;grid[0][0]=1;q.push({0,0});
        while(q.size())
        {
            int sz=q.size();
            ans++;
            while(sz--)
            {
                auto p=q.front();q.pop();
                int r=p.first,c=p.second;
				
				
                if(r+1<m)           if(r+1==m-1&&c==n-1)return ans;else if(!grid[r+1][c]) grid[r+1][c]=1,q.push({r+1,c});
                if(c+1<n)           if(r==m-1&&c+1==n-1)return ans;else if(!grid[r][c+1]) grid[r][c+1]=1,q.push({r,c+1});
                if(r+1<m&&c+1<n)    if(r+1==m-1&&c+1==n-1)return ans;else if(!grid[r+1][c+1]) grid[r+1][c+1]=1,q.push({r+1,c+1});
                if(c-1>=0)          if(!grid[r][c-1]) grid[r][c-1]=1,q.push({r,c-1});
                if(r-1>=0)          if(!grid[r-1][c]) grid[r-1][c]=1,q.push({r-1,c});
                if(r+1<m&&c-1>=0)   if(!grid[r+1][c-1]) grid[r+1][c-1]=1,q.push({r+1,c-1});
                if(r-1>=0&&c+1<n)   if(!grid[r-1][c+1]) grid[r-1][c+1]=1,q.push({r-1,c+1});
                if(r-1>=0&&c-1>=0)  if(!grid[r-1][c-1]) grid[r-1][c-1]=1,q.push({r-1,c-1});
            }
        }
        return -1;
    }
};