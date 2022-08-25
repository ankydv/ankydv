import java.util.Scanner;
class Process{
    int pid;
    int bt;
    Process(int pid,int bt){
        this.pid = pid;
        this.bt = bt;
    
    }
}



public class Main{
    public static void main(String[] args){
        
        //Take user input of processes
        System.out.println("Enter the number of processes :: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Process[] processes = new Process[n];
        for(int i = 0; i<n; i++){
            System.out.println("Enter pid and burst time :: ");
            int id = sc.nextInt();
            int b = sc.nextInt();
            Process p = new Process(id,b);
            processes[i] = p;
        }
        
    }
}
