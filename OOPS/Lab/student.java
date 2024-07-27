import java.util.*;
class student
{
	public static void main(String[] args)
	{
		int roll;
		String name, cls;
		Scanner s1= new Scanner(System.in);
		System.out.println("Enter your name: ");
		name=s1.nextLine();
		System.out.println("Enter your class: ");
		cls=s1.nextLine();
		System.out.println("Enter your roll no: ");
		roll=s1.nextInt();
		System.out.println("Name: "+name);
		System.out.println("Class: "+cls);
		System.out.println("Roll No: "+roll);
	}
}
		