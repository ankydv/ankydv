import java.util.Scanner;

class Person{
    String name;
    int age;
    int salary;
    Person(String n,int a,int s){
        this.name=n;
        this.age=a;
        this.salary=s;
    }
    }
class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the credentials of the person one by one ( name,age,salary)");
        Person p=new Person(sc.nextLine(),sc.nextInt(),sc.nextInt());
        System.out.println("The credentials of Persion object 'p' are");
        System.out.println("name = "+p.name+" age = "+p.age+" salary = "+p.salary);
    }
}