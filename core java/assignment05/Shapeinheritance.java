package inheritancepractice;

class Shape{
	double area;

	Shape() {
		this.area=00;
	}

	Shape(double area) {
		this.area = area;
	}

	double getArea() {
		return area;
	}

	void setArea(double area) {
		this.area = area;
	}
	void display()
	{
		System.out.println("area: "+this.area);
	}
}
//shape superClass end;

class Circle extends Shape{
	double radius;

	Circle() {
		super();
		this.radius=00;
	}

	Circle(double area ,double radius) {
		super(area);
		this.radius=radius;
	}

	double getRadius() {
		return radius;
	}

	void setRadius(double radius) {
		this.radius = radius;
	}
	void display()
	{
		super.display();
		System.out.println("circle radius: "+this.radius);
	}
}
//Circle subClass end;

class Triangle extends Shape{
	double base;
	double height;
	Triangle() {
		super();
		this.base=00;
		this.height=00;
	}
	Triangle(double area,double base,double height) {
		super(area);
		this.base=base;
		this.height=height;
	}
	double getBase() {
		return base;
	}
	void setBase(double base) {
		this.base = base;
	}
	double getHeight() {
		return height;
	}
	void setHeight(double height) {
		this.height = height;
	}
	void display()
	{
		super.display();
		System.out.println("triangle base: "+this.base);
		System.out.println("triangle height: "+this.height);
	}
}
//triangle subClass end here;

class Rectangle extends Shape{
	double lenght;
	double breadth;
	Rectangle() {
		super();
		this.lenght=00;
		this.breadth=00;
	}
	Rectangle(double area,double lenght,double breadth) {
		super(area);
		this.lenght=lenght;
		this.breadth=breadth;
	}
	double getLenght() {
		return lenght;
	}
	void setLenght(double lenght) {
		this.lenght = lenght;
	}
	double getBreadth() {
		return breadth;
	}
	void setBreadth(double breadth) {
		this.breadth = breadth;
	}
	void display()
	{
		super.display();
		System.out.println("triangle length: "+this.lenght);
		System.out.println("triangle breadth: "+this.breadth);
	}
	
}

class Shapeinheritance {

	public static void main(String[] args) {
		Shape s1=new Shape(12.3);
		Circle c1=new Circle(12.3,22);
		Triangle t1=new Triangle(12.4,34.2,2.3);
		Rectangle r1=new Rectangle(23.3,33.2,33.3);
	
		s1.display();
		c1.display();
		t1.display();
		r1.display();

	}

}
