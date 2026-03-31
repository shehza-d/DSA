import java.io.*;
<<<<<<< HEAD

class Solution {
    static int[] solve(int N, double[] X, double[] Y, double[] S, boolean[] R) {
        // X: The x-positions of the persons.
        // Y: The y-positions of the persons.
        // S: The sleep depths of the persons.
        // R: For each person: true if the person was awakened by earthquake,
        //     otherwise false.

        int floor_xE = 0; // floor of x-position of earth quake.
        int floor_yE = 0; // floor of y-position of earth quake.
        int ceil_xE = 1;  // ceil of x-position of earth quake.
        int ceil_yE = 1;  // ceil of y-position of earth quake.

        // YOUR CODE HERE
        
	return new int[]{floor_xE, floor_yE, ceil_xE, ceil_yE};
    }
    
=======
import java.util.*;

class Solution {
    /**
     * Return a tuple with 4 values denoting the floor and ceil bounds of the
     * epicenter of the earthquake: floor_xE, floor_yE, ceil_xE, ceil_yE
     *
     * N: the number of persons
     * persons: a list of N persons, each represented as (Xi, Yi, Si, Ri)
     */
    static int[] solve(int N, List<Person> persons) {
        // YOUR CODE HERE
        return new int[]{0, 0, 1, 1};
    }

    static class Person {
        double X, Y, S;
        String R;
        Person(double X, double Y, double S, String R) {
            this.X = X;
            this.Y = Y;
            this.S = S;
            this.R = R;
        }
    }

>>>>>>> origin/earthquake
    static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
<<<<<<< HEAD
	int T = Integer.parseInt(in.readLine());
	for (int j = 0; j < T; ++j) {
	    int N = Integer.parseInt(in.readLine());
            double[] X = new double[N];
            double[] Y = new double[N];
            double[] S = new double[N];
            boolean[] R = new boolean[N];
            
	    for (int i = 0; i < N; ++i) {
		String[] temp = in.readLine().split(" ");
                X[i] = Double.parseDouble(temp[0]);
                Y[i] = Double.parseDouble(temp[1]);
                S[i] = Double.parseDouble(temp[2]);
                R[i] = temp[3].equals("awaken");
	    }

            int[] pos = solve(N, X, Y, S, R);
            out.print(pos[0]);
            out.print(" ");
            out.print(pos[1]);
            out.print(" ");
            out.print(pos[2]);
            out.print(" ");
            out.print(pos[3]);
            out.print("\n");
	}
	out.flush();
=======
        int T = Integer.parseInt(in.readLine());
        for (int t = 0; t < T; t++) {
            int N = Integer.parseInt(in.readLine());
            List<Person> persons = new ArrayList<>();
            for (int i = 0; i < N; i++) {
                String[] parts = in.readLine().split(" ");
                double Xi = Double.parseDouble(parts[0]);
                double Yi = Double.parseDouble(parts[1]);
                double Si = Double.parseDouble(parts[2]);
                String Ri = parts[3];
                persons.add(new Person(Xi, Yi, Si, Ri));
            }

            int[] ans = solve(N, persons);
            out.println(ans[0] + " " + ans[1] + " " + ans[2] + " " + ans[3]);
        }
        out.flush();
>>>>>>> origin/earthquake
    }
}
