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
		    int x = obj.nextInt();
		    int y = obj.nextInt();
		    int z = obj.nextInt();
		    
		    if(x > y && x > z)
            {
                System.out.println("Setter");
            }
            else if(y > z)
            {
                System.out.println("Tester");
            }
            else
            {
                System.out.println("Editorialist");
            }
		    t--;
		}
	}
}
