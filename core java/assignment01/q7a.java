class Admin{
       int id;
       String name; 
       double salary; 
       double allow;
}
class Info{
      public static void main(String[] args)
      {      Admin a1=new Admin();
             a1.id=1;
             a1.name="Vijay";
             a1.salary=59000;
             a1.allow=23000;
             System.out.println("admin id: "+a1.id);
             System.out.println("admin name: "+a1.name);        
             System.out.println("admin salary: " + a1.salary);
             System.out.println("admin allowance: "+a1.allow);
       }
} 