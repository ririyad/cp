import java.util.Scanner;

/**
 * Created by Rashedul Islam Riyad on 1/26/2016.
 */
public class loops {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for(int k = 1; k<= t; k++) {
            double a = sc.nextDouble();
            double b = sc.nextDouble();
            double n = sc.nextDouble();
            double sum, x;

            for (int i = 0; i < n; i++) {
                x= 0;
                for (int j = 0; j <= i; j++) {
                    x +=  Math.pow(2, j) * b;
                }
                sum = a + x;
                System.out.printf("%d ", (int) sum);
            }
            System.out.printf("\n");
        }

    }
}
