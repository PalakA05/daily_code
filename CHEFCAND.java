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
		    int n = obj.nextInt();
		    int x = obj.nextInt();
		    if(x>=n)
		    {
		        System.out.println(0);
		    }
		    else{
		        n = ((n-x)+3)/4;
		        System.out.println(n);
		    }
		    t--;
		}
	}
}
