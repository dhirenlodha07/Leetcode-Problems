class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
    int i,j,total = 0;
    vector<int>row;
    for(int i = 0;i<grid.size();i++) {
        int count = 0;
        for(int j = 0;j<grid[i].size();j++) {
            if(grid[i][j]==1) {
                total++;
                count++;
            }
        }
        row.push_back(count);
    }
    vector<int>col;
    for(int i = 0;i<grid[0].size();i++) {
        int count=0;
        for(int j = 0;j<grid.size();j++) {
            if(grid[j][i]==1) {
                count++;
            }
        }
        col.push_back(count);
    }
        int count = 0;

     for(int i = 0;i<grid.size();i++) {
        for(int j = 0;j<grid[i].size();j++) {
            if(grid[i][j]==1) {
                if(row[i]==1 && col[j]==1)
                count++;
            }
        }
     }
    return total - count;
    }
};