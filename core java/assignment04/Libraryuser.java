package day02;
class Book{
	String name;
	int lateDays;
	double totalFine;
	static double finePerday=50;
	
	
	Book(String name,int lateDays)
	{
		this.name=name;
		this.lateDays=lateDays;
		
	}
	void setName(String name)
	{
		this.name=name;
	}
	String getName()
	{
		return name;
	}
	Void setLateDays(int lateDays)
	{
		this.lateDays=lateDays;
	}
	int getLateDays()
	{
		return lateDays;
	}
	static void setFinePerday(double d)
	{
		Book.finePerday=d;
	}
	static double getFinePerday()
	{
		return finePerday;
	}
	double cal()
	{
	   this.totalFine = this.lateDays * finePerday;
	   return totalFine;
	}
	void display()
	{
		System.out.println("Name: "+this.name);
		System.out.println("late days: "+this.lateDays);
		System.out.println("fine Perdays: "+Book.finePerday);
		System.out.println("total fine: "+cal());
	}
}
class Libraryuser {
		public static void main(String[] args)
		{
			Book b1=new Book("vijay",30);
			Book b2=new Book("ajay",40);
			b1.display();
			b2.display();
			Book.setFinePerday(100);
			Book b3=new Book("sambhaji",45);
			b3.display();
		}
	
	
	
	
	
	
	
	
	
}
