class Bankacc{
      int accno;
      String name;
      double bal;
      double inter;
}
class Info{
      public static void main(String[] args)
      {      Bankacc b1= new Bankacc();
             b1.accno=129;
             b1.name="Vijay";
             b1.bal=10000;
             b1.inter=2.3;
             System.out.println("account number: " + b1.accno);
             System.out.println("holder name: " + b1.name);
             System.out.println("current Balance: " + b1.bal);
             System.out.println("interestRate: " + b1.inter);
        }
}