import java.util.Scanner;
 
public class Elections {
 
    public static void solve(int a, int b, int c) {
        System.out.print(Math.max(0, Math.max(b, c) + 1 - a));
        System.out.print(" ");
        System.out.print(Math.max(0, Math.max(a, c) + 1 - b));
        System.out.print(" ");
        System.out.print(Math.max(0, Math.max(a, b) + 1 - c));
        System.out.println();
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int t = sc.nextInt();
 
        for (int j = 0; j < t; ++j) {
            solve(sc.nextInt(), sc.nextInt(), sc.nextInt());
        }
    }
}
