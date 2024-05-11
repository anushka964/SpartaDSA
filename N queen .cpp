bool check(int row,int col, vector<vector<int>> &visit,int n)

{
    int x=row;
    int y=col;
    //check for left
    while(y>=0)

    {
        if(visit[x][y]==1)
          return false;
         y--;
    }
    x=row;
    y=col;

  //check for left upward row
     while(x>=0 && y>=0)
     {
         if(visit[x][y]==1)
         {
             return false;
         }
         x--;
         y--;
     }
     x=row;
     y=col;

     //check for left downward diagonal

     while(x<n && y>=0)
     {
         if(visit[x][y]==1)
         return false;
         x++;
         y--;
     }
     return true;
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &visit,int n)

{

    //base case
    if(col == n)
    {
        vector<int> temp;
        for(int i=0;i<n;i++)

        {
            for(int j=0;j<n;j++)
            {
                temp.push_back(visit[i][j]);
            }    
        }
        ans.push_back(temp);
        return ;
    }
    //check only one case
    for(int i=0;i<n;i++)
    {
        if(check(i,col,visit,n))

        {
            visit[i][col]=1;
            solve(col+1,ans,visit,n);
            visit[i][col]=0;

        }
    }
}
vector<vector<int>> solveNQueens(int n) {

    vector<vector<int>> ans;
    vector<vector<int>> visit(n,vector<int>(n,0));
    solve(0,ans,visit,n);
    return ans;

}
