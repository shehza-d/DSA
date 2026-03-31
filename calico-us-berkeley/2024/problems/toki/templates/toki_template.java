import java.io.*;

class Solution {
    /**
     * Determine if the word W follows the rules of toki pona phonotactics.
     * 
     * W: the word to check
     */
    static String solve(String W) {
        // YOUR CODE HERE
        return "pona";
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            String W = in.readLine();
            out.println(solve(W));
        }
        out.flush();
    }
}
