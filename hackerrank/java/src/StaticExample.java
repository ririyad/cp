/**
 * Created by Rashedul Islam Riyad on 1/27/2016.
 */
public class StaticExample {
    public static void main(String[] args){
        objectCounter obj1 = new objectCounter();
        System.out.println(obj1.getCounter());

        objectCounter obj2 = new objectCounter();
        System.out.println(obj2.getCounter());

    }
}

class objectCounter{
     static int counter = 0;
    public objectCounter(){
        counter++;
    }

    public int getCounter(){
        return counter;
    }
}
