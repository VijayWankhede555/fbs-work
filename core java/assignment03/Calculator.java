package day02;

class Cal{
	void add(int a,int b)
	{
		System.out.println(a+b);
	}
	void add(int a,double b)
	{
		System.out.println(a+b);
	}
	void add(double a,double b)
	{
		System.out.println(a+b);
	}
	void add(double a,int b)
	{
		System.out.println(a+b);
	}
	// addtion end;
	void sub(int a,int b)
	{
		System.out.println(a-b);
	}
	void sub(int a,double b)
	{
		System.out.println(a-b);
	}
	void sub(double a,double b)
	{
		System.out.println(a-b);
	}
	void sub(double a,int b)
	{
		System.out.println(a-b);
	}
	//substraction ends;
	void mul(int a,int b)
	{
		System.out.println(a*b);
	}
	void mul(int a,double b)
	{
		System.out.println(a*b);
	}
	void mul(double a,double b)
	{
		System.out.println(a*b);
	}
	void mul(double a,int b)
	{
		System.out.println(a*b);
	}
	//multiplication ends;
	void div(int a,int b)
	{
		System.out.println(a/b);
	}
	void div(int a,double b)
	{
		System.out.println(a/b);
	}
	void div(double a,double b)
	{
		System.out.println(a/b);
	}
	void div(double a,int b)
	{
		System.out.println(a/b);
	}
}

class Calculator{

	public static void main(String[] args) {
		Cal c1=new Cal();
		
		c1.add(15,35);
		c1.add(13, 12.30);
		c1.add(12.50, 12.50);
		c1.add(13.67, 12);
		
		c1.sub(23,22);
		c1.sub(13,12.3);
		c1.sub(23.50,23.50);
		c1.sub(13.56,12);
		
		c1.mul(23,22);
		c1.mul(13,12.3);
		c1.mul(23.50,23.50);
		c1.mul(13.56,12);
		
		c1.div(23,22);
		c1.div(13,12.3);
		c1.div(23.50,23.50);
		c1.div(13.56,12);
		

	}

}
