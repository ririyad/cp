import java.util.Scanner;

/**
 * Created by Rashedul Islam Riyad on 3/21/2016.
 */
public class String2 {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int k = sc.nextInt();

        String min = str.substring(0, k);
        for(int i = 1; i< str.length()-k+1; i++){
            String tmp1 = str.substring(i, k+i);
            if(tmp1.compareTo(min)<0)
                min = tmp1;
        }

         String max = str.substring(0,k);
        for(int i = 1; i< str.length() - k+1; i++){
            String tmp2 = str.substring(i, k+i);
                if(tmp2.compareTo(max)>0)
                max = tmp2;
        }
        System.out.println(min);
        System.out.printf(max);




    }
}
