class Book{
     int id;
     String name;
     String author;
}
class Info{
      public static void main(String[] args)
     {       Book b1=new Book();
             b1.id=101;
             b1.name="swarajya";
             b1.author="shiv";
             System.out.println("book id: "+b1.id);
             System.out.println("book name: "+b1.name);
             System.out.println("book author: "+b1.author);
      }
}