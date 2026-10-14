package day02;

class Emp{
	String name;
	double salary;
	static double bonus=20;
	double total;
	
	Emp(String name,double salary)
	{
		this.name=name;
		this.salary=salary;
	}
	void setName(String name)
	{
		this.name=name;
	}
	String getName()
	{
		return name;
	}
	void setsalary(double salary)
	{
		this.salary=salary;
	}
	double getsalary()
	{
		return salary;
	}
	static void setBonus(double bn)
	{
		Emp.bonus=bn;
	}
	static double getBonus()
	{
		return bonus;
	}
	double calculation()
	{
		this.total=this.salary+(this.salary * Emp.bonus/100);
		return total;
	}
	void display()
	{
		System.out.println("employee Name: "+this.name);
		System.out.println("employee salary: "+this.salary);
		System.out.println("Bonus: "+Emp.bonus);
		System.out.println("total salary: "+calculation());
		
	}
}
class Employee {

	public static void main(String[] args) {
		Emp e1=new Emp("suresh",45000);
		Emp e2=new Emp("rakesh",55500);
		Emp e3=new Emp("sanjay",34000);
		e1.display();
		e2.display();
		Emp.setBonus(25);
		e3.display();
		
	}

}
