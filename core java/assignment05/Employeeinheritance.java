package inheritancepractice;

class Employee{
	int id;
	String name;
	static double salary=58000;
	Employee() {
		super();
		this.id=00;
		this.name="NA";

	}
	Employee(int id, String name) {
		super();
		this.id = id;
		this.name = name;
	}
	int getId() {
		return id;
	}
	void setId(int id) {
		this.id = id;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	static double getSalary() {
		return salary;
	}
	static void setSalary(double salary) {
		Employee.salary = salary;
	}
	void display()
	{
		System.out.println("employee id: "+this.id);
		System.out.println("emploee name: "+this.name);
		System.out.println("employee salary: "+Employee.salary);
	}
}
// main supper class end;

class Admin extends Employee{
	double allowance;

	Admin() {
		super();
		this.allowance=00;
	}

	Admin(int id, String name,double allowance) {
		super(id, name);
		this.allowance=allowance;
	}

	double getAllowance() {
		return allowance;
	}

	void setAllowance(double allowance) {
		this.allowance = allowance;
	}
	void display()
	{
		super.display();
		System.out.println("employee allowance:"+this.allowance);
	}

}
//Admin sub class end;

class Salesmanagr extends Employee{
	double incentive;
	int target;
	Salesmanagr() {
		super();
		this.incentive=00;
		this.target=00;
		
	}
	Salesmanagr(int id, String name,double incentive,int target) {
		super(id, name);
		this.incentive=incentive;
		this.target=target;
		
	}
	
	double getIncentive() {
		return incentive;
	}
	void setIncentive(double incentive) {
		this.incentive = incentive;
	}
	int getTarget() {
		return target;
	}
	void setTarget(int target) {
		this.target = target;
	}
	void display()
	{
		super.display();
		System.out.println("Employee incentive: "+this.incentive);
		System.out.println("employee target: "+this.target);
	}
}
//salesmanager subclass end here;

class Hr extends Employee{
	double commission;

	Hr() {
		super();
		this.commission=00;
	}

	Hr(int id, String name,double commission) {
		super(id, name);
		this.commission=commission;
	}

	double getCommission() {
		return commission;
	}

	void setCommission(double commission) {
		this.commission = commission;
	}
	void display()
	{
		super.display();
		System.out.println("employee commision: "+this.commission);
	}
}
//Hr sub class end;

class Employeeinheritance {

	public static void main(String[] args) {
		Employee e1=new Employee(12,"anirudh");
		Admin a1=new Admin(23,"aniket",12000);
		Salesmanagr s1=new Salesmanagr(33,"sambhaji",34400,30);
		Hr h1=new Hr(44,"shivshankar",6790);
		a1.display();
		e1.display();
		s1.display();
		h1.display();
		
		

	}

}
