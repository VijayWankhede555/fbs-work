
class Person{
	String name;
	int age;
	String Address;
	Person() {
		
		this.name="NA";
		this.age=00;
		this.Address="NA";
	}
	Person(String name, int age, String address) {
		
		this.name = name;
		this.age = age;
		Address = address;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this.age = age;
	}
	String getAddress() {
		return Address;
	}
	void setAddress(String address) {
		Address = address;
	}
	void display()
	{
		System.out.println("person Name: "+this.name);
		System.out.println("person age: "+this.age);
		System.out.println("person address: "+this.Address);
	}
	
}
//person superClass end ;

class Student extends Person{
	int rollNumber;
	String cource;
	double marks;
	Student() {
		super();
		this.rollNumber=00;
		this.cource="NA";
		this.marks=00;
		
	}
	Student(String name, int age, String address,int rollNumber,String cource,double marks) {
		super(name, age, address);
		this.rollNumber=rollNumber;
		this.cource=cource;
		this.marks=marks;
	}
	int getRollNumber() {
		return rollNumber;
	}
	void setRollNumber(int rollNumber) {
		this.rollNumber = rollNumber;
	}
	String getCource() {
		return cource;
	}
	void setCource(String cource) {
		this.cource = cource;
	}
	double getMarks() {
		return marks;
	}
	void setMarks(double marks) {
		this.marks = marks;
	}
	
	void display()
	{
		super.display();
		System.out.println("roll number: "+this.rollNumber);
		System.out.println("cource: "+this.cource);
		System.out.println("marks: "+this.marks);
	}
}
//student subClass end here;

class Teacher extends Person{
		String subject;
		double salary;
		String experience;
		Teacher() {
			super();
			this.subject="NA";
			this.salary=00;
			this.experience="NA";
		}
		Teacher(String name, int age, String address,String subject,double salary,String experience) {
			super(name, age, address);
			this.subject=subject;
			this.salary=salary;
			this.experience=experience;
			
		}
		String getSubject() {
			return subject;
		}
		void setSubject(String subject) {
			this.subject = subject;
		}
		double getSalary() {
			return salary;
		}
		void setSalary(double salary) {
			this.salary = salary;
		}
		String getExperience() {
			return experience;
		}
		void setExperience(String experience) {
			this.experience = experience;
		}
		
		void display()
		{
			super.display();
			System.out.println("subject: "+this.subject);
			System.out.println("salary: "+this.salary);
			System.out.println("experience: "+this.experience);
			
		}
		
}
//teacher subClass end ;

class Doctor extends Person{
		String specialization;
		String hospitalName;
		int numberOfPatients;
		Doctor() {
			super();
			this.specialization="NA";
			this.hospitalName="NA";
			this.numberOfPatients=00;
		}
		Doctor(String name, int age, String address,String specialization,String hospitalName,int numberOfPatients) {
			super(name, age, address);
			this.specialization=specialization;
			this.hospitalName= hospitalName;
			this.numberOfPatients=numberOfPatients;
		}
		String getSpecialization() {
			return specialization;
		}
		void setSpecialization(String specialization) {
			this.specialization = specialization;
		}
		String getHospitalName() {
			return hospitalName;
		}
		void setHospitalName(String hospitalName) {
			this.hospitalName = hospitalName;
		}
		int getNumberOfPatients() {
			return numberOfPatients;
		}
		void setNumberOfPatients(int numberOfPatients) {
			this.numberOfPatients = numberOfPatients;
		}
		
		void display()
		{
			super.display();
			System.out.println("specialization: "+this.specialization);
			System.out.println(" hospitalName: "+this.hospitalName);
			System.out.println(" numberOfPatients: "+this.numberOfPatients);
		}
			
}
//doctor subClass ends here;


class Personinherit {
		public static void main(String[] args) {
	Person p1 =new Person("vijay",22,"Nanded");
	Student s1=new Student("nikhil",21,"Nanded",123,"Python",45.78);
	Teacher t1=new Teacher("P.R.kadam",45,"Nanded","java",58879,"9 years");
	Doctor d1=new Doctor("DR.satish",29,"krushnoor","heart","sahyadri",150);
	
	p1.display();
	s1.display();
	t1.display();
	d1.display();
	
		}	
}
