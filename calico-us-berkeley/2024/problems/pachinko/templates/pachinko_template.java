import java.io.*;

class Solution {
    /**
     * Return the expected length of a path that starts at node 1 in the pachinko.
     * 
     * N: number of nodes in the pachinko
     * S: starting node of the flipper
     * E: ending node of the flipper
     * P: list of parent nodes in the pachinko
     */
    static float solve(int N, int S, int E, int[] P) {
        // YOUR CODE HERE
        return 0;
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int tc = 0; tc < T; tc++) {
            String[] temp = in.readLine().split(" ");
            int N = Integer.parseInt(temp[0]), S = Integer.parseInt(temp[1]), E = Integer.parseInt(temp[2]);
            temp = in.readLine().split(" ");
            int[] P = new int[N - 1];
            for (int i = 0; i < N - 1; ++i) {
                P[i] = Integer.parseInt(temp[i]);
            }
            out.println(solve(N, S, E, P));
        }
        out.flush();
    }
}
