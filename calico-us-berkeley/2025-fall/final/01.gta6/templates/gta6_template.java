import java.io.*;

class Solution {
    /*
     * E: The name of the event
     * Y: Year
     * M: Month
     * D: Day
     */
    static String solve(String E, int Y, int M, int D) {
        // YOUR CODE HERE
        return "";
    }
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int T = Integer.parseInt(in.readLine());
        for (int i = 0; i < T; i++) {
            String E = in.readLine();   
            String[] temp = in.readLine().split(" ");
            int Y = Integer.parseInt(temp[0]), M = Integer.parseInt(temp[1]), D = Integer.parseInt(temp[2]);
            out.println(solve(E, Y, M, D));
        }
        out.flush();
    }
}

