class Employee{  
      int id;
      double salary;
      String name;
}
 class Test{
       public static void main(String[] args) {
              Employee e1;
              e1=new Employee();
              e1.id=101;
              e1.salary=25000;
              e1.name="shiv";
              System.out.println("employee id: "+e1.id);
              System.out.println("employee salary: "+e1.salary);
              System.out.println("employee name: "+e1.name);
            }
}