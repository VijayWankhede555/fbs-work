package inheritancepractice;

class Student{
	int frn;
	String name;
	double distance;
	static int count;
	
	Student()
	{
		count++;
		this.frn=00;
		this.name="NA";
		this.distance=0.0;			
	}
	
	Student(int frn,String name,double distance){
		count++;
		this.frn=frn;
		this.distance=distance;
		this.name=name;
	}
	static int getCount() {
		return count;
	}

	static void setCount(int count) {
		Student.count = count;
	}

	void setFrn(int frn)
	{
		this.frn=frn;
	}
	int getFrn()
	{
		return frn;
	}
	void setName(String name)
	{
		this.name=name;
	}
	String getName()
	{
		return name;
	}
	void setDistance(double distance)
	{
		this.distance=distance;
		
	}
	double getDistance()
	{
		return distance;
	}
	void display()
	{
		System.out.println("student Frn: "+this.frn);
		System.out.println("student name: "+this.name);
		System.out.println("distance tavel: "+this.distance);
	}	
}
   //main class end here;
class Placestudent extends Student{
	String companyName;
	String designation;
	
	Placestudent()
	{
		super();
		this.companyName="NA";
		this.designation="NA";
	}
	Placestudent(int frn,String name,double distance,String companyName,String designation)
	{
		super(frn,name,distance);	
		this.companyName=companyName;
		this.designation=designation;
	}

	String getCompanyName() {
		return companyName;
	}

	void setCompanyName(String companyName) {
		this.companyName = companyName;
	}

	String getDesignation() {
		return designation;
	}

	void setDesignation(String designation) {
		this.designation = designation;
	}
	void display()
	{
		super.display();
		System.out.println("student companyName: "+this.companyName);
		System.out.println("designation: "+this.designation);	
	}
	}


class Inherit {

	public static void main(String[] args) {
			Student s1=new Student(100,"shubham",350);
			Student s2=new Student(101,"tejas",670);
			Placestudent ps1=new Placestudent(23, "Mayur", 700, "Infosys", "Java Dev");
			ps1.display();
			s2.display();
			s1.display();
			System.out.println(ps1.getFrn());

	}

}
