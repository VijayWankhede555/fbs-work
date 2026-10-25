package inheritancepractice;

class Artist{
	String name;
	int age;
	Artist() {
		this.name="NA";
		this.age=00;
	}
	Artist(String name, int age) {
		
		this.name = name;
		this.age = age;
	}
	String getName() {
		return name;
	}
	void setName(String name) {
		this.name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this.age = age;
	}
	void display()
	{
		System.out.println("artist name: "+this.name);
		System.out.println("artist age: "+this.age);
	}
}
//Artist superClass end;

class Painter extends Artist{
	String paintingStyle;
	String mediumUsed;
	int numberofPaintings;
	Painter() {
		super();
		this.paintingStyle="NA";
		this.mediumUsed="NA";
		this.numberofPaintings=00;
	}
	Painter(String name, int age,String paintingStyle,String mediumUsed,int numberofPaintings ) {
		super(name, age);
		this.paintingStyle=paintingStyle;
		this.mediumUsed=mediumUsed;
		this.numberofPaintings=numberofPaintings;
	}
	String getPaintingStyle() {
		return paintingStyle;
	}
	void setPaintingStyle(String paintingStyle) {
		this.paintingStyle = paintingStyle;
	}
	String getMediumUsed() {
		return mediumUsed;
	}
	void setMediumUsed(String mediumUsed) {
		this.mediumUsed = mediumUsed;
	}
	int getNumberofPaintings() {
		return numberofPaintings;
	}
	void setNumberofPaintings(int numberofPaintings) {
		this.numberofPaintings = numberofPaintings;
	}
	void display()
	{
		super.display();
		System.out.println("painting Stysle: "+this.paintingStyle);
		System.out.println("Medium Used: "+this.mediumUsed);
		System.out.println("painting number: "+this.numberofPaintings);
	}
}
//Painter subClass end;
	
class Musician extends Artist{
	String instrument;
	String musicGenre ;
	int  numberOfAlbums ;
	Musician() {
		super();
		this.instrument="NA";
		this.musicGenre="NA";
		this.numberOfAlbums=00;
		
	}
	Musician(String name, int age,String instrument,String musicGenre,int numberOfAlbums) 
	{
		super(name, age);
		this.instrument=instrument;
		this.musicGenre=musicGenre;
		this.numberOfAlbums=numberOfAlbums;
	}
	String getInstrument() {
		return instrument;
	}
	void setInstrument(String instrument) {
		this.instrument = instrument;
	}
	String getMusicGenre() {
		return musicGenre;
	}
	void setMusicGenre(String musicGenre) {
		this.musicGenre = musicGenre;
	}
	int getNumberOfAlbums() {
		return numberOfAlbums;
	}
	void setNumberOfAlbums(int numberOfAlbums) {
		this.numberOfAlbums = numberOfAlbums;
	}
	
void display()
{
	super.display();
	System.out.println("music instrument: "+this.instrument);
	System.out.println("music genre: "+this.musicGenre);
	System.out.println("music albums: "+this.numberOfAlbums);
}
}
//music subClass end;

class Actor extends Artist{
	String filmIndustry;
	int numberOfMovies;
	Actor() {
		super();
		this.filmIndustry="NA";
		this.numberOfMovies=00;
	}
	Actor(String name, int age,String filmIndustry,int numberOfMovies) {
		super(name, age);
		this.filmIndustry=filmIndustry;
		this.numberOfMovies=numberOfMovies;
	}
	String getFilmIndustry() {
		return filmIndustry;
	}
	void setFilmIndustry(String filmIndustry) {
		this.filmIndustry = filmIndustry;
	}
	int getNumberOfMovies() {
		return numberOfMovies;
	}
	void setNumberOfMovies(int numberOfMovies) {
		this.numberOfMovies = numberOfMovies;
	}
	void display()
	{
		super.display();
		System.out.println("film industry: "+this.filmIndustry);
		System.out.println("movie numbers: "+this.numberOfMovies);
	}
}

class Artistinheritance{

	public static void main(String[] args) {
		Artist a1=new Artist("shubham",34);
		Painter p1=new Painter("surya",33,"Renaissance", "Oil", 20);
		Musician m1=new Musician("Arijit Singh", 39,"Vocals", "Playback", 5);
		Actor ar1=new Actor("Shah Rukh Khan", 60,"Bollywood", 100);
		a1.display();
		p1.display();
		m1.display();
		ar1.display();	
	}
}


