import java.util.Scanner;

class WrongAnswerException extends Exception {
public WrongAnswerException(String s){
super(s);
}
}


public class Quiz {

public static void main(String args[]){
    int score=0;
    Scanner sc=new Scanner(System.in);
    System.out.println("Which of the following is an applicatin of ML?\n");
    System.out.println("1. printer\n2. Robotics\n3. Weaving\n");
    int a=sc.nextInt();
    if(a==2)
        score++;

    System.out.println("What is the method used to find the length of an array in Java?\n");
    System.out.println("1. length()\n2. len()\n3. arrlen()\n");
    int b=sc.nextInt();
    if(b==1)
        score++;

    System.out.println("Information hiding can be also termed as-\n");
    System.out.print("1.Data hiding\n2. Inheritance\n3. Encaptulation\n");
    int c=sc.nextInt();
    if(c==3)
        score++;

        try  
        {  
            quizScore(score);
        }  
        catch (WrongAnswerException ex)  
        {  
            System.out.println("Exception occured: " + ex);  
        }  

    }

public static void quizScore(int s) throws WrongAnswerException{
        if(s==3)
            System.out.println("Good! Your answers are correct.\n");
        else
            throw new WrongAnswerException("You have given wrong answer/answers");
}
}
