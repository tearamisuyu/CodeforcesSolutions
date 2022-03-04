import java.util.Scanner;
 
/**
 *
 * @author rukmaada19
 */
public class WayTooLongWords {
    
    public static void solve(String s) {
        int count = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            count++;
        }
        
        if (count > 10) {
            System.out.println(Character.toString(s.charAt(0)) + (count - 2) + Character.toString(s.charAt(s.length()-1)));
        } else {
            System.out.println(s);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for (int i = 0; i < n; ++i) {
            solve(sc.next());
        }
    }
}
