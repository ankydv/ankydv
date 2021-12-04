public class Circle {
    public int centre,radius;
    static int count=0;

    Circle(){
        this.centre=0;
        this.radius=0;
        count+=1;
    }

}
 class Main1 {
    public static void main(String args[]){
    Circle c= new Circle();
    System.out.println("centre = "+c.centre+" radius = "+c.radius);
    System.out.println("Number of instances = "+ Circle.count);
}
}
