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
		while(t>0)
		{
		    int a,b,x,y;
		    a = obj.nextInt();
		    b = obj.nextInt();
		    x = obj.nextInt();
		    y = obj.nextInt();
		    if(a==b)
		    {
		        System.out.println("Yes");
		    }
		    else
		    {
		        if(a>b)
		        {
		            int c = a-b;
		            if(c>y)
		            {
		                System.out.println("No");
		            }
		            else
		            {
		                System.out.println("Yes");
		            }
		        }
		        else{
		            int c = b-a;
		            if(c>x)
		            {
		                System.out.println("No");
		            }
		            else{
		                System.out.println("Yes");
		            }
		        }
		    }
		    t--;
		}
	}
}
