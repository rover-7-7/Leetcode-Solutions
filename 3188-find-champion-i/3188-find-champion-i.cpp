class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){

                if(grid[i][j]==1 && i!=j){
c++;
                }
                
            }
            if(c==n-1)return i;
        }
        return -1;


    }
};