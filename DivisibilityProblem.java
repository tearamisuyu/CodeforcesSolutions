import java.util.Scanner;
 
public class Main {
 
    public static void solve(int a, int b) {
        if (a % b != 0) {
            System.out.println(b - a%b);
        } else {
            System.out.println(0);
        }
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int t = sc.nextInt();
 
        for (int i = 0; i < t; ++i) {
            solve(sc.nextInt(), sc.nextInt());
        }
    }
}
