import java.util.*;

public class Main {
    static int B;
    static int H;
    static boolean flag = true;

    // static block
    static {
        Scanner sc = new Scanner(System.in);
        B = sc.nextInt();
        H = sc.nextInt();
        sc.close();
        try {
            if (B < 1 || H < 1) {
                flag = false;
                throw new Exception("Breadth and height must be positive");
            }
        } catch (Exception e) {
            System.out.println(e); // this prints in the form: java.lang.Exception: message
        }
    }

    public static void main(String[] args) {
        if (flag) {
            int area = B * H;
            System.out.println(area);
        }
    }
}
