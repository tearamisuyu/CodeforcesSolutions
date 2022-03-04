import java.util.Scanner;
 
public class Main {
    public static void solve(int x, int y) {
        int s = x * y;
        int d = 0;
 
        for (int i = 0; i <= s; i+=2) {
            ++d;
        }
 
        System.out.println(d-1);
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        solve(sc.nextInt(), sc.nextInt());
 
    }
}
