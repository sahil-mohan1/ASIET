import java.util.*;
class transpose
{
	public static void main (String args [])
	{
		int a[][]=new int[50][50];
		int b[][]=new int[50][50];
		Scanner S= new Scanner(System.in);
		System.out.println("enter the size of matrix: ");
		int r=S.nextInt();
		int c=S.nextInt();
		System.out.println("enter the matrix: ");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{	System.out.print("a[" + i + "][" + j + "]: ");
				a[i][j]=S.nextInt();
			}
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				b[j][i]=a[i][j];
			}
		}
		System.out.println("the transpose matrix is: ");
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<r;j++)
			{
				System.out.print(" "+b[i][j]);
			}
			System.out.println();
		}
		S.close();
}
}
