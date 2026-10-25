package day02;
class Shape{
	double area;
	
	void setArea(double area)
	{
		this.area=area;
		
	}
	double getArea()
	{
		return area;
	}
	
	//method overloading;
	 public void calculateArea(Triangle t)
	 {
	        setArea(0.5 * t.getBase() * t.getHeight());
	        System.out.println("Area of Triangle: " + getArea());
	    }

	    public void calculateArea(Rectangle r) 
	    {
	        setArea(r.getLength() * r.getBreadth());
	        System.out.println("Area of Rectangle: " + getArea());
	    }

	    public void calculateArea(Circle c)
	    {
	        setArea(Math.PI*c.getRadius()*c.getRadius());
	        System.out.println("Area of Circle: " + getArea());
	    }
	}
	

class Triangle{
	double base;
	double height;

	void setBase(double base)
	{
		this.base=base;
	}
	double getBase()
	{
		return base;
	}
	void setHeight(double height)
	{
		this.height=height;
	}
	double getHeight()
	{
		return height;
	}	
}
class Rectangle{
	double length;
	double breadth;
	
	void setLength(double length)
	{
		this.length=length;
	}
	double getLength()
	{
		return length;
	}
	void setBreadth(double breadth)
	{
		this.breadth=breadth;
	}
	double getBreadth()
	{
		return breadth;
	}
	
}
class Circle{
	double radius;
	
	void setRadius(double radius)
	{
		this.radius=radius;
	}
	double getRadius()
	{
		return radius ;
	}	
}

class Calarea{

	public static void main(String[] args) {
		Shape s = new Shape();

        Triangle t = new Triangle();
        t.setBase(10);
        t.setHeight(5);

        Rectangle r = new Rectangle();
        r.setLength(8);
        r.setBreadth(4);

        Circle c = new Circle();
        c.setRadius(7);
        
        s.calculateArea(t);
        s.calculateArea(r);
        s.calculateArea(c);
    
		
	}

}
