/**
 * Created by Rashedul Islam Riyad on 1/30/2016.
 */

interface Printable{
    void print();
}

interface Showable{
    void show();
}

public class A7 implements Printable, Showable{
    public void print(){
        System.out.println("Printing...");
    }

    public void show(){
        System.out.println("Showing...");
    }
    public static void main(String[] args){
        A7 obj = new A7();
        obj.print();
        obj.show();

    }
}
