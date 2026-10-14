package day02;


class Electricity{
	int unit;
	String name;
	double bill;
	static double perunit=10.50;

  Electricity(int unit, String name)
  {
	  this.unit=unit;
	  this.name=name;
  }
  void setUnit(int unit)
  {
	  this.unit=unit;
  }
  int getUnit()
  {
	  return unit;
  }
  void setName(String name)
  {
	  this.name=name;
  }
  String getName()
  {
	  return name;
  }
  
  static void setPerunit(double pn)
  {
	  Electricity.perunit=pn;
  }
  static double getPerunit()
  {
	  return perunit;
  }
  double Calculation()
  {
	  this.bill=this.unit* Electricity.perunit;
	  return bill;
  }
 
  void display()
  {
	  System.out.println("electricity units: "+ this.unit);
	  System.out.println("consumer name: "+this.name);
	  System.out.println("per unit rate: "+Electricity.perunit);
	  System.out.println("total ammount: "+Calculation());  
  }
  
}

class Billinfo {

	public static void main(String[] args) {
		Electricity e1=new Electricity(150,"ramesh");
		Electricity e2=new Electricity(100,"akash");
		Electricity e3=new Electricity(250,"somesh");
		Electricity e4=new Electricity(450,"rajesh");
		e1.display();
		e2.display();
		Electricity.setPerunit(11);
		e3.display();
		e4.display();
		
	}

}
