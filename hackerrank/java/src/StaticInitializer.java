/**
 * Created by Rashedul Islam Riyad on 3/21/2016.
 */
import java.util.Scanner;

/**
 * Created by Rashedul Islam Riyad on 3/20/2016.
 */
public class StaticInitializer {

    static boolean flag = true;
    static int B, H;
    static {
        Scanner inp = new Scanner(System.in);
        B = inp.nextInt();
        H = inp.nextInt();
        if(B <= 0 || H <= 0) {
            flag = false;
            System.out.println("java.lang.Exception: Breadth and height must be positive");
        }
    }

    public static void main(String[] args){
        if(flag){
            int area = B*H;
            System.out.println(area);
        }
    }
}

