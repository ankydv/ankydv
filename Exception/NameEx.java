import java.util.Scanner;

class NameException extends Exception{
    public NameException(String s){
        super(s);
    }
}

class InsufficientAgeException extends Exception{
    public InsufficientAgeException(String s){
        super(s);
    }
}



public class NameEx {

public static void validateAge(int age) throws InsufficientAgeException{
    if(age>18)
        System.out.println("Your age satisfies appropriate criteria");
    else   
        throw new InsufficientAgeException("Your age is not acceptable");
}
public static void validateName(String name) throws NameException{
    if(name.length()!=0)
        System.out.println("Name Accepted");
    else
        throw new NameException("Blank/Empty name");
}
public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter your name");
    String name=sc.nextLine();
    try{
        validateName(name);
    }
    catch(NameException n){
        System.out.println("Exception : "+n);
    }
    System.out.println("Enter your age");
    int age=sc.nextInt();
    try{
        validateAge(age);
    }
    catch(InsufficientAgeException a){
        System.out.println("Exception :"+a);
    }
}

}

