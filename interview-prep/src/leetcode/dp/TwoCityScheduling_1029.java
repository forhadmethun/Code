package leetcode.dp;

public class TwoCityScheduling_1029 {
    public int twoCitySchedCost(int[][] costs) {
        int n = costs.length / 2;
        int[][]dp = new int[costs.length + 1][costs.length + 1];

        for(int i = 1; i <= n; i++){
            dp[i][0] = dp[i-1][0] + costs[i-1][0];
        }
        for(int j = 1; j <= n; j++){
            dp[0][j] = dp[0][j-1] + costs[j-1][1];
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                dp[i][j] = Math.min(
                        dp[i][j-1] + costs[i+j-1][1],
                        dp[i-1][j] + costs[i+j-1][0]
                );
            }
        }
        return dp[n][n];
    }
}
