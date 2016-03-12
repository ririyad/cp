/**
 * Created by Rashedul Islam Riyad on 1/21/2016.
 */
public class Student {
    int id;
    String name;
    int age;

    Student(int id, String name){
        this.id = id;
        this.name = name;
    }

    Student(int id, String name, int age){
        this.id = id;
        this.name = name;
        this.age = age;
    }

    void display(){
        System.out.println(id + " " + name + " " + age);
    }

    public static void main(String[] args){
        Student st1 = new Student(111, "Rashed");
        Student st2 = new Student(111, "Riyad", 24);

        st1.display();
        st2.display();
    }
}
