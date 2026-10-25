
class Book{
	String title;
	String author;
	double price;
	String publisher;
	Book() {
		this.title="NA";
		this.author="NA";
		this.price=00;
		this.publisher="NA";
	}
	Book(String title, String author, double price, String publisher) {
		this.title = title;
		this.author = author;
		this.price = price;
		this.publisher = publisher;
	}
	String getTitle() {
		return title;
	}
	void setTitle(String title) {
		this.title = title;
	}
	String getAuthor() {
		return author;
	}
	void setAuthor(String author) {
		this.author = author;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this.price = price;
	}
	String getPublisher() {
		return publisher;
	}
	void setPublisher(String publisher) {
		this.publisher = publisher;
	}
	
	void display()
	{
		System.out.println("Book title: "+this.title);
		System.out.println("book Author: "+this.author);
		System.out.println("book publisher: "+this.publisher);
		System.out.println("book price: "+this.price);
	}
}
//Book superClass end;

class Ebook extends Book{
	String fileFormat;
	double fileSize;
	String downloadAvailable;
	Ebook() {
		super();
		this.fileFormat="NA";
		this.fileSize=00;
		this.downloadAvailable="NA";
	}
	
	Ebook(String title, String author, double price, String publisher,String fileFormat,double fileSize,String downloadAvailable) {
		super(title, author, price, publisher);
		this.fileFormat=fileFormat;
		this.fileSize=fileSize;
		this.downloadAvailable=downloadAvailable;
	}

	String getFileFormat() {
		return fileFormat;
	}

	void setFileFormat(String fileFormat) {
		this.fileFormat = fileFormat;
	}

	double getFileSize() {
		return fileSize;
	}

	void setFileSize(double fileSize) {
		this.fileSize = fileSize;
	}

	String getDownloadAvailable() {
		return downloadAvailable;
	}

	void setDownloadAvailable(String downloadAvailable) {
		this.downloadAvailable = downloadAvailable;
	}
	
	void display()
	{
		super.display();
		System.out.println("ebook fileFormat: "+this.fileFormat);
		System.out.println("FileSize: "+this.fileSize);
		System.out.println("DownloadAvailable: "+this.downloadAvailable);
	}
}
//ebook subClass end;

class PrintedBook extends Book {
	int pageCount;
	String coverType;
	String pageType;
	PrintedBook() {
		super();
		this.pageCount=00;
		this.coverType="NA";
		this.pageType="NA";
	}
	PrintedBook(String title, String author, double price, String publisher,int pageCount,String coverType,String pageType) {
		super(title, author, price, publisher);
		this.pageCount=pageCount;
		this.coverType=coverType;
		this.pageType=pageType;
	}
	int getPageCount() {
		return pageCount;
	}
	void setPageCount(int pageCount) {
		this.pageCount = pageCount;
	}
	String getCoverType() {
		return coverType;
	}
	void setCoverType(String coverType) {
		this.coverType = coverType;
	}
	String getPageType() {
		return pageType;
	}
	void setPageType(String pageType) {
		this.pageType = pageType;
	}
	
	void display()
	{
		super.display();
		System.out.println("pageCount: "+this.pageCount);
		System.out.println("coverType: "+this.coverType);
		System.out.println("pageType: "+this.pageType);
		
	}
}
//printedbook subClass end here;

class Bookinheritance {

	public static void main(String[] args) {
		Book b1=new Book();
		Ebook e1=new Ebook();
		PrintedBook p1=new PrintedBook();
		
		b1.display();
		e1.display();
		p1.display();
		
	}

}
