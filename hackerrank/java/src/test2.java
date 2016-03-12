/**
 * Created by Rashedul Islam Riyad on 1/27/2016.
 */

class Bank{
    int getInterestRate(){
        return 0;
    }
}

class Janata extends Bank{
    int getInterestRate(){
        return 8;
    }
}

class Agrani extends Bank{
    int getInterestRate(){
        return 9;
    }
}

class Sonali extends Bank{
    int getInterestRate(){
        return 10;
    }
}

public class test2 {
    public static void main(String[] args) {
        Bank b1 = new Janata();
        Bank b2 = new Agrani();
        Bank b3 = new Sonali();

        System.out.println(b1.getInterestRate());
        System.out.println(b2.getInterestRate());
        System.out.println(b3.getInterestRate());
    }

}
