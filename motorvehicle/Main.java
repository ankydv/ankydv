
class MotorVehicle{
String modelName,modelNumber;
double modelPrice;
    public MotorVehicle(String modelName,String modelNumber,double modelPrice){
        this.modelName=modelName;
        this.modelNumber=modelNumber;
        this.modelPrice=modelPrice;
    }
public void display(){
    System.out.print("Model name = "+this.modelName+"\nModel Number = "+this.modelNumber+"\nModel Price = "+this.modelPrice+"\n\n");
}
}
class Car extends MotorVehicle {
    double discountRate;
    public Car(String modelName,String modelNumber,double modelPrice,double discountRate){
    super(modelName,modelNumber,modelPrice);
    this.discountRate=discountRate;
    }
    @Override
    public void display(){
        System.out.print("Model name = "+this.modelName+"\nModel Number = "+this.modelNumber+"\nModel Price = "+this.modelPrice+"\nDiscount Rate = "+this.discountRate+"\n\n");
    }

    public void discount(){
        double disc = this.discountRate*this.modelPrice/100;
        double amount = this.modelPrice-disc;
        System.out.println("Discount Amount = "+disc);
        System.out.println("Effective Sellling Price = "+amount);
    }
}

public class Main{

public static void main(String args[]){
    MotorVehicle bike = new MotorVehicle("HONDA", "XBLADEV2", 110000);
    Car bmw = new Car("LAMBORGHINI","VENONO",35000000,10);
    bike.display();
    bmw.display();
    bmw.discount();
}
}

