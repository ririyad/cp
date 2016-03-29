import java.util.Scanner;

/**
 * Created by Rashedul Islam Riyad on 3/22/2016.
 */
public class String3 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String revStr = "";

        for(int i = str.length()-1; i >= 0; i--)
            revStr = revStr + str.charAt(i);

        if(str.equals(revStr))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}
