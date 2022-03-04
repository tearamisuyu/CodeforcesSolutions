import java.util.Scanner;
 
public class Main {
    public static int[] position(int[][] m) {
        for (int y = 0; y < 5; ++y) {
            for (int x = 0; x < 5; ++x) {
                if (m[y][x] == 1) {
                    return new int[]{y+1, x+1};
                }
            }
        }
 
        return new int[]{0, 0};
    }
 
    public static void solve(int[][] m) {
       int moves = 0;
       int[] ps = position(m);
 
       while (ps[0] < 3) {
           ++moves;
           ++ps[0];
       }
       while (ps[0] > 3) {
           ++moves;
           --ps[0];
       }
 
       while (ps[1] < 3) {
           ++moves;
           ++ps[1];
       }
       while (ps[1] > 3) {
           ++moves;
           --ps[1];
       }
 
        System.out.println(moves);
    }
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] m = new int[5][5];
 
        for (int y = 0; y < 5; ++y) {
            for (int x = 0; x < 5; ++x) {
                m[y][x] = sc.nextInt();
            }
        }
 
        solve(m);
    }
}
