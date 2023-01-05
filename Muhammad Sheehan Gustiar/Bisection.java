import java.util.*;

//membuat class biseksi
class Bisection
{
	static float f (float x)
	{
		return ((x*x)-(4*x)+4);
	}
	public static void main(String args[])
	{
		int i=1;
		float a,b,m;
		double e=0.0001;
		System.out.println("\nMasukan nilai a");
		Scanner in=new Scanner(System.in);
		System.out.println("Masukan nilai b");
		a=in.nextFloat();
		b=in.nextFloat();
		if((f(a)*f(b))>0)
			System.out.println("Interval tidak ada");
		else
		{
			m=(a+b)/2;
			while(Math.abs(f(m))>=0)
			{
				if(f(m)==0)
				{
					System.out.println("Akar Ditemukan!");
					break;
				}
			
			    else
			    {
				   System.out.println(a+" "+b+" "+i+" "+f(m)+" "+m);
				    if((f(a)*f(m))>0)
				      a=m;
				    else
					  b=m;
				    m=(a+b)/2;
				    i=i+1;
			    }
		    }
		    System.out.println(a+" "+b+" "+i+" "+f(m)+" "+m);
		    System.out.println("Akar = "+m);
		}
		
		
	}
}