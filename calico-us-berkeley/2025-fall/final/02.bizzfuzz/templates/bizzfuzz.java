import java.io.*;

class Solution {
    /**
    * Return the string containing the word you should say
    * 
    * W1: the second-to-last word said
    * W2: the last word said
    */
    static String solve(String W1, String W2) {
        // YOUR CODE HERE
        return "";
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            String W1 = in.readLine();
            String W2 = in.readLine();

            out.println(solve(W1, W2));
        }
        out.flush();
    }
}
