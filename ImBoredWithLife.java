import java.util.Scanner;
 
public class Main {
 
    public static long fact(long a) {
        int r = 1;
        for (int i = 2; i <= a; ++i) {
            r *= i;
        }
 
        return r;
    }
 
    public static long solve(long a, long b) {
        return a > b ? fact(b) : fact(a);
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(solve(sc.nextLong(), sc.nextLong()));
    }
}
