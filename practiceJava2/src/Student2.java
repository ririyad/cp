/**
 * Created by Rashedul Islam Riyad on 1/21/2016.
 */
public class Student2 {
    int id;
    String name;

    Student2(){
        System.out.println("Default constructor is invoked");
    }

    Student2(int id, String name){
        this();
        this.id = id;
        this.name = name;
    }


    void display(){
        System.out.println(id + " " + name);
    }

    public static void main(String[] args){
        Student2 e1 = new Student2(111, "Rashed");
        Student2 e2 = new Student2(222, "Riyad");

        e1.display();
        e2.display();
    }
}
