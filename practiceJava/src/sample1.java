import java.util.Scanner;

/**
 * Created by Rashedul Islam Riyad on 1/19/2016.
 */
public class sample1 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int a = input.nextInt();
        int b = input.nextInt();

        int c = (a * b)* b;

        System.out.println(c);
    }
}
