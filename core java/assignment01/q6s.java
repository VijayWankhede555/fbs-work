class Salesm{
      int id; 
      String name; 
      double salary; 
      double incentive; 
      double target;
}
class Info{
      public static void main(String[] args)
     {       Salesm s1=new Salesm();
             s1.id=1;
             s1.name="Vijay";
             s1.salary=45000;
             s1.incentive=3500;
             s1.target=30;
             System.out.println("sales manager id: "+s1.id);
             System.out.println("sales manager name: "+s1.name);
             System.out.println("salary: "+s1.salary);
             System.out.println("incentive: "+s1.incentive);
             System.out.println("target: "+s1.target);
    }
}
     