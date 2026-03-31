import java.io.*;
import java.util.ArrayList;

class Solution {
    /**
     *  P: list of floating point numbers. Each floating point number represents 
     *	the probability between 0 and 1 of a successful reaction.

     *	Prints a sequence of actions to standard output that represents the best
     *	strategy to maximize the number of successful reactions.
     */
	
	static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);
	
    static void solve(int A, ArrayList<Double> P) {
        // YOUR CODE HERE
    	out.println("NEXT");
    }
    

    public static void main(String[] args) throws IOException {
        int A = Integer.parseInt(in.readLine());
        ArrayList<Double> P = new ArrayList<>();
        for (int i = 0; i < A; i++) {
            String[] temp = in.readLine().split(" ");
            P.add(Double.parseDouble(temp[0])); 
        }
        solve(A, P);
        out.flush();
    }
}
