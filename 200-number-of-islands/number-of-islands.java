class Solution {

    public void DFS(char[][] grid, int i, int j) {

        int m = grid.length;
        int n = grid[0].length;

        grid[i][j] = '0';

        int[][] div = {
            {-1, 0},
            {0, -1},
            {0, 1},
            {1, 0}
        };

        for (int[] d : div) {

            int r_n = i + d[0];
            int c_n = j + d[1];

            if (r_n >= 0 && r_n < m &&
                c_n >= 0 && c_n < n &&
                grid[r_n][c_n] == '1') {

                DFS(grid, r_n, c_n);
            }
        }
    }

    public int numIslands(char[][] grid) {

        int count = 0;

        int m = grid.length;
        int n = grid[0].length;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1') {
                    DFS(grid, i, j);
                    count++;
                }
            }
        }

        return count;
    }
}