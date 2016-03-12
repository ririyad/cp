/**
 * Created by Rashedul Islam Riyad on 1/30/2016.
 */
public class TryCatch1 {
    public static void main(String[] args){
        try{
            int data = 50/0;
            System.out.println(data);
        }catch (ArithmeticException e){
            System.out.println("Rest of the code");
        }
    }
}
