import java.io.*;
import java.util.*;

class Solution {
    static class Piece {
        String type;
        int x, y;

        Piece(String type, int x, int y) {
            this.type = type;
            this.x = x;
            this.y = y;
        }
    }

    /**
     * Return the score of S amplified K times
     * 
     * S: string to amplify
     * K: integer for number of times to amplify
     */
    static int solve(int N, int M, int K, List<Piece> P) {
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
            int K = Integer.parseInt(in.readLine());
            List<Piece> P = new ArrayList<>();
            for (int j = 0; j < K; j++) {
                temp = in.readLine().split(" ");
                String piece = temp[0];
                int x = Integer.parseInt(temp[1]);
                int y = Integer.parseInt(temp[2]);
                P.add(new Piece(piece, x, y));
            }
            out.println(solve(N, M, K, P));
        }
        out.flush();
    }
}