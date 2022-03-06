class Student{
    String name;
    int age;
    public Student(String name,int age){
        this.name = name;
        this.age = age;
    }
    public void show(){
        System.out.print("Name : "+this.name+"\nAge : "+this.age);
    }
}


public class Main
{
	public static void main(String[] args) {
		Student obj = new Student("Bapan",20);
		obj.show();
	}
}
