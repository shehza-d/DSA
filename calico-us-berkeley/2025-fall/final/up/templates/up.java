import java.io.*;

class Solution {
    /**
     * Return the top-down area of the shape
     *   
     *  N: number of rows
     *  M: number of columns
     *  G: an N by M grid representing the front-view and depths of the character
     */
    static int solve(int N, int M, String[] G) {
        // YOUR CODE HERE
        return -1;
    }
    
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            String[] temp = in.readLine().split(" ");
            int N = Integer.parseInt(temp[0]);
            int M = Integer.parseInt(temp[1]);
            String[] G = new String[N];
            for (int j = 0; j < N; j++) {
                String row = in.readLine();
                G[j] = row;
            }
            out.println(solve(N, M, G));
        }
        out.flush();
    }
}
