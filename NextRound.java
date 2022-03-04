import java.util.ArrayList;
import java.util.Scanner;
 
public class Main {
    static Scanner sc = new Scanner(System.in);
    static int n, k, m;
 
    public static void solve(ArrayList<Integer> pl) {
        ArrayList<Integer> sp = new ArrayList<>();
        m = pl.get(k-1);
        for (Integer p : pl) {
            if (p >= m && p != 0) sp.add(p);
        }
 
        System.out.println(sp.size());
    }
 
    public static void main(String[] args) {
        n = sc.nextInt(); // n participants
        k = sc.nextInt(); // k-th elimination
        ArrayList<Integer> pl = new ArrayList<>();
 
        for (int i = 0; i < n; ++i) {
            pl.add(sc.nextInt());
        }
 
        solve(pl);
    }
}
