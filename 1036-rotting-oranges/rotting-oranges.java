import java.util.*;

class Solution {
    public int orangesRotting(int[][] grid) {

        int m = grid.length;
        int n = grid[0].length;

        Queue<int[]> q = new LinkedList<>();
        int freshCount = 0;

        // Count fresh oranges and add rotten oranges to queue
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    freshCount++;
                } else if (grid[i][j] == 2) {
                    q.offer(new int[]{i, j});
                }
            }
        }

        // No fresh oranges present
        if (freshCount == 0) {
            return 0;
        }

        int time = -1;

        // Marker for level separation
        q.offer(new int[]{-1, -1});

        while (!q.isEmpty()) {

            int[] curr = q.poll();
            int r = curr[0];
            int c = curr[1];

            // Marker encountered
            if (r == -1 && c == -1) {
                time++;

                if (!q.isEmpty()) {
                    q.offer(new int[]{-1, -1});
                }
                continue;
            }

            // Up
            if (r - 1 >= 0 && grid[r - 1][c] == 1) {
                grid[r - 1][c] = 2;
                freshCount--;
                q.offer(new int[]{r - 1, c});
            }

            // Down
            if (r + 1 < m && grid[r + 1][c] == 1) {
                grid[r + 1][c] = 2;
                freshCount--;
                q.offer(new int[]{r + 1, c});
            }

            // Left
            if (c - 1 >= 0 && grid[r][c - 1] == 1) {
                grid[r][c - 1] = 2;
                freshCount--;
                q.offer(new int[]{r, c - 1});
            }

            // Right
            if (c + 1 < n && grid[r][c + 1] == 1) {
                grid[r][c + 1] = 2;
                freshCount--;
                q.offer(new int[]{r, c + 1});
            }
        }

        return freshCount == 0 ? time : -1;
    }
}