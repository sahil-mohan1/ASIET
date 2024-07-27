import java.util.*;
class sumavg
{
    public static void main(String args[]) 
    {
        Scanner s1= new Scanner(System.in);
        int a,b;
        System.out.println("Enter two numbers: ");
        a=s1.nextInt();
        b=s1.nextInt();
       	int sum=a+b;
        System.out.println("The sum of the numbers is: " +sum);
        float avg=sum/2;
        System.out.println("The average of the numbers is: " +avg);
        s1.close();
	}   
}
   