import java.util.Scanner;
 
public class Main {
    static int sum = 0;
 
    public static void solve(String cmd) {
        switch (cmd) {
            case "++X":
            case "X++":
                ++sum;
                break;
            case "--X":
            case "X--":
                --sum;
                break;
        }
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
 
        for (int i = 0; i < n+1; ++i) {
            solve(sc.nextLine());
        }
 
        System.out.println(sum);
    }
}
