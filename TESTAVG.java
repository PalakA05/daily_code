/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner obj = new Scanner(System.in);
		int t;
		t = obj.nextInt();
		while(t-->0)
		{
		   int a = obj.nextInt();
		   int b = obj.nextInt();
		   int c = obj.nextInt();
		   
		   int avg1 = (a+b)/2;
		   int avg2 = (b+c)/2;
		   int avg3 = (a+c)/2;
		   
		   if(avg1<35 || avg2<35 || avg3<35)
		   {
		       System.out.println("Fail");
		   }
		   else{
		       System.out.println("Pass");
		   }
		}
	}
}
