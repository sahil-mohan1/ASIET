import java.util.*;
class sumthree
{
    public static void main(String[] args) 
    {
        Scanner s1= new Scanner(System.in);
        int a,b,c;
        System.out.println("Enter three numbers");
        a=s1.nextInt();
        b=s1.nextInt();
        c=s1.nextInt();
        int sum=a+b+c;
        System.out.println("The sum is: "+sum);
        s1.close();
    }
}