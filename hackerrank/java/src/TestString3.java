/**
 * Created by Rashedul Islam Riyad on 3/21/2016.
 */
public class TestString3 {
    public static void main(String[] args){
        String s1 = "Taskin";
        String s2 = "Ahmed";
        String s3 = "TASKIN";
        String s4 = "Ahmed";

        System.out.println(s2.equals(s4));
        System.out.println(s1.equals(s3));
        System.out.println(s1.equalsIgnoreCase(s3));
    }
}
