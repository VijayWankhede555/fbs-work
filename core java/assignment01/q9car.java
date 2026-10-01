class Car{
    int num;
    String brand;
    String model;
    double price;
    String clr;
}
class Info{
      public static void main(String[] arg)
      {      Car c1=new Car();
             c1.num=100;
             c1.brand="Mahindra";
             c1.model="scorpio";
             c1.price=2200000;
             c1.clr="balck";
             System.out.println("car number: "+c1.num);
             System.out.println("car brand: "+c1.brand);
             System.out.println("car model: "+c1.model);
             System.out.println("car price: "+c1.price);
             System.out.println("car colour: "+c1.clr);
      }
} 