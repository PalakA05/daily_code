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
		    
		    if(a>b+c || b>a+c || c>a+b)
		    {
		        System.out.println("YES");
		    }
		    else{
		        System.out.println("NO");
		    }
		}
	}
}
