class Solution {
public:
    void DFS(vector<vector<char>>& grid, int i, int j)
    { 
        int m = grid.size();
        int n = grid[0].size();

        grid[i][j] = '0';

        int dir[4][2] = {
            {-1, 0},
            {1, 0},
            {0, -1},
            {0, 1}
        };

        for(auto &d : dir)
        {
            int rn = i + d[0];
            int cn = j + d[1];

            if((rn >= 0 && rn < m) && (cn >= 0 && cn < n) && (grid[rn][cn] == '1'))
            {
                DFS(grid, rn, cn);
            }
        }

    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0; i <= m - 1; i++)
        {
            for(int j = 0; j <= n - 1; j++)
            {
                if(grid[i][j] == '1')
                {
                    DFS(grid, i, j);
                    count++;
                }
            }   
        }
        return count;

    }
};
