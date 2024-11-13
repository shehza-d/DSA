import java.io.*;

class Solution {
    /**
     * Return the best number to "zero out" in order to
     * minimize the expected value of a dice roll.
     * 
     * N: the number of faces on the die
     * X: the list of numbers on each face of the die
     */
    static int solve(int N, int[] X) {
        // YOUR CODE HERE
        return -1;
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            int N = Integer.parseInt(in.readLine());
            
            int[] X = new int[N];
            String[] info = in.readLine().split(" ");
            for (int j = 0; j < N; j++) {
                X[j] = Integer.parseInt(info[j]);
            }
            out.println(solve(N, X));
        }
        out.flush();
    }
}
