import java.io.*;

class Solution {
    /**
     * For each game, output who wins the game in one line.
     * 
     * N: size of the game board
     * M: number of different games
     * A: game board
     * G: description of each game
     */
    static void solve(int N, int M, int[] A, int[][] G) {
        // YOUR CODE HERE
        return;
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        String[] info = in.readLine().strip().split(" ");
        int N = Integer.parseInt(info[0]);
        int M = Integer.parseInt(info[1]);

        int[] A = new int[N];
        int[][] G = new int[M][2];

        info = in.readLine().strip().split(" ");
        for (int i = 0; i < N; ++i) {
            A[i] = Integer.parseInt(info[i]);
        }
        for (int i = 0; i < M; ++i) {
            info = in.readLine().strip().split(" ");
            for (int j = 0; j < 2; ++j) {
                G[i][j] = Integer.parseInt(info[j]);
            }
        }
        solve(N, M, A, G);
        out.flush();
    }
}
