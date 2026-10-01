class Pstudent{
      int frn;
      String name; 
      double dist;
      String cname; 
      String dest;
}
class Psinfo{
      public static void main(String[] args) {
             Pstudent p1=new Pstudent();
             p1.frn=101;
             p1.name="vijay";
             p1.dist=4;
             p1.cname="TCS";
             p1.dest="jr developer";
             System.out.println("student FRN: "+p1.frn);
             System.out.println("student name: "+p1.name);
             System.out.println("student travel: "+p1.dist);
             System.out.println("student componey name: "+p1.cname);
             System.out.println("student designation: "+p1.dest);
           }
}