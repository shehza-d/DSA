import java.io.*;

class Solution {
    /**
     * Return the score of S amplified K times
     * 
     * L: Length of bag string
     * N: Target depth
     * S: Bag string (characters can be '(', ')', '|', or 'O')
     */
    static int solve(int L, int N, String S) {
        // YOUR CODE HERE
        return -1;
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            String[] temp = in.readLine().split(" ");
            int L = Integer.parseInt(temp[0]);
            int N = Integer.parseInt(temp[1]);
            String S = in.readLine();
            out.println(solve(L, N, S));
        }
        out.flush();
    }
}