import java.util.*;
class sqrtpowr
{
    public static void main (String[] args)
    {
        int a,b;
        Scanner s1=new Scanner(System.in);
        System.out.println("Enter a number: ");
        a=s1.nextInt();
        System.out.println("Enter the power: ");
        b=s1.nextInt();
        double sqrt=Math.sqrt(a);
        double power=Math.pow(a,b);
        System.out.println("The root is: "+sqrt); 
        System.out.println("The power is: "+power);
        s1.close();
    }
}