import java.io.*;

class Solution {
    /**
     * Return the name of the player (either Big Ben or Oski) that will always win
     * in a game with K turns assuming both players play optimally.
     * 
     * K: the number of turns
     */
    static String solve(int K) {
        // YOUR CODE HERE
        return "";
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            int K = Integer.parseInt(in.readLine());
            out.println(solve(K));
        }
        out.flush();
    }
}
