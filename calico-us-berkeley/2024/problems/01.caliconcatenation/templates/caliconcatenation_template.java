import java.io.*;

class Solution {
    /**
     * Return the CALICOncatenation of S.
     *
     * S: a string
     */
    static String solve(String S) {
        return "";
    }

    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            String S = in.readLine();
            out.println(solve(S));
        }
        out.flush();
    }
}
