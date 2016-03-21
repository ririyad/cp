/**
 * Created by Rashedul Islam Riyad on 3/20/2016.
 */
public class StaticExample {
    static{
        System.out.println("This is first static block");
    }

    public StaticExample(){
        System.out.println("This is constructor");
    }

    public static String staticString = "Static Variable";

    static {
        System.out.println("This is the second block and " + staticString);
    }

    public static void main(String[] args){
        StaticExample statEx = new StaticExample();
        StaticExample.staticMethod2();

    }

    static {
        staticMethod();
        System.out.println("This is the third static block");
    }

    public static void staticMethod(){
        System.out.println("This is a static method");
    }

    public static void staticMethod2(){
        System.out.println("This is a static method2");
    }

}
