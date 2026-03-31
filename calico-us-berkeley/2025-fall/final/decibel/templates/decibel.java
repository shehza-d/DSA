import java.io.*;

class Solution {
    /**
     * Return the score of S amplified K times
     * 
     * S: string to amplify
     * K: integer for number of times to amplify
     */
    static int solve(String S, int K) {
        // YOUR CODE HERE
        return -1;
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            String[] temp = in.readLine().split(" ");
            String S = temp[0]; 
            int K = Integer.parseInt(temp[1]);
            out.println(solve(S, K));
        }
        out.flush();
    }
}
