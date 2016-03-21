import java.util.logging.ConsoleHandler;

/**
 * Created by Rashedul Islam Riyad on 3/20/2016.
 */
public class ConstructorBlockExample {
    {
        System.out.println("This is first constructor block");
    }

    public ConstructorBlockExample(){
        System.out.println("This is NO parameter constructor");
    }

    public ConstructorBlockExample(String param1){
        System.out.println("This is single parameter constructor");
    }

    public ConstructorBlockExample(String param1, String param2){
        System.out.println("This is two parameter constructor");
    }

    {
        System.out.println("This is second constructor block");
    }

    public static void main(String[] args){
        ConstructorBlockExample constr = new ConstructorBlockExample();
        ConstructorBlockExample constr2 = new ConstructorBlockExample("param1");
        ConstructorBlockExample constr3 = new ConstructorBlockExample("param1", "param2");
    }

}
