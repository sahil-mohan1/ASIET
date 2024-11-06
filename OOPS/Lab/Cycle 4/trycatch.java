import java.io.*;
class trycatch
{
	public static void main(String args[])
	{
		try
		{
			int []a={1,2,3};
			a[5]=10;
		}
		catch(Exception e)
		{
			System.out.println("Arrayoutofbounds exception occured");
		}
	finally
	{
		System.out.println("finally block executed successfully");
	}
}
}

