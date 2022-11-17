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
		    int a,b,c;
		    a = obj.nextInt();
		    b = obj.nextInt();
		    c = obj.nextInt();
		    int total = a + b + c;
		    if(a>=10 && b>=10 && c>=10 && total>=100)
		    {
		        System.out.println("PASS");
		    }
		    else{
		        System.out.println("FAIL");
		    }
		    t--;
		}
	}
}
