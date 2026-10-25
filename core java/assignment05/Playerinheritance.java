package inheritancepractice;

class Player{
	 String name;
	 int age;
	 String country;
	 int matchPlayed;
	 int jerssyNumber;
	 Player() {
		
		this.name="NA";
		this.age=00;
		this.country="NA";
		this.matchPlayed=00;
		this.jerssyNumber=00;
	 }
	 Player(String name, int age, String country, int matchPlayed, int jerssyNumber) {
		
		this.name = name;
		this.age = age;
		this.country = country;
		this.matchPlayed = matchPlayed;
		this.jerssyNumber = jerssyNumber;
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
	 String getCountry() {
		 return country;
	 }
	 void setCountry(String country) {
		 this.country = country;
	 }
	 int getMatchPlayed() {
		 return matchPlayed;
	 }
	 void setMatchPlayed(int matchPlayed) {
		 this.matchPlayed = matchPlayed;
	 }
	 int getJerssyNumber() {
		 return jerssyNumber;
	 }
	 void setJerssyNumber(int jerssyNumber) {
		 this.jerssyNumber = jerssyNumber;
	 }
	 void display()
	 {
		 System.out.println("player name: "+this.name);
		 System.out.println("player age: "+this.age);
		 System.out.println("country name: "+this.country);
		 System.out.println("matchPlaye: "+this.matchPlayed);
		 System.out.println("player jerssyNumber: "+this.jerssyNumber);
		 
	 }
}
//player superClass end;

class Cricketplayer extends Player{
	int totalRun;
	int totalWecket;
	String battingStyle;
	String bowlingStyle;
	Cricketplayer() {
		super();
		this.totalRun=00;
		this.totalWecket=00;
		this.battingStyle="NA";
		this.bowlingStyle="NA";
		
	}
	Cricketplayer(String name, int age, String country, int matchPlayed, int jerssyNumber,int totalRun,int totalWecket,String battingStyle,String bowlingStyle) {
		super(name, age, country, matchPlayed, jerssyNumber);
		this.totalRun=totalRun;
		this.totalWecket=totalWecket;
		this.battingStyle=battingStyle;
		this.bowlingStyle=bowlingStyle;
	}
	int getTotalRun() {
		return totalRun;
	}
	void setTotalRun(int totalRun) {
		this.totalRun = totalRun;
	}
	int getTotalWecket() {
		return totalWecket;
	}
	void setTotalWecket(int totalWecket) {
		this.totalWecket = totalWecket;
	}
	String getBattingStyle() {
		return battingStyle;
	}
	void setBattingStyle(String battingStyle) {
		this.battingStyle = battingStyle;
	}
	String getBowlingStyle() {
		return bowlingStyle;
	}
	void setBowlingStyle(String bowlingStyle) {
		this.bowlingStyle = bowlingStyle;
	}
	void display()
	{
		super.display();
		System.out.println("total runs: "+this.totalRun);
		System.out.println("total wickets: "+this.totalWecket);
		System.out.println("battingStyle: "+this.battingStyle);
		System.out.println("bowlingStyle: "+this.bowlingStyle);	
	}
	
}
//cricketPlayer subclass end;
class FootballPlayer extends Player{
	int totalGoal;
	int playingPosition;
	FootballPlayer() {
		super();
		this.totalGoal=00;
		this.playingPosition=00;
		
	}
	FootballPlayer(String name, int age, String country, int matchPlayed, int jerssyNumber,int totalGoal,int playingPosition ) {
		super(name, age, country, matchPlayed, jerssyNumber);
		this.totalGoal=totalGoal;
		this.playingPosition=playingPosition;
	}
	int getTotalGoal() {
		return totalGoal;
	}
	void setTotalGoal(int totalGoal) {
		this.totalGoal = totalGoal;
	}
	int getPlayingPosition() {
		return playingPosition;
	}
	void setPlayingPosition(int playingPosition) {
		this.playingPosition = playingPosition;
	}
	void display()
	{
		super.display();
		System.out.println("palayerGoal: "+this.totalGoal);
		System.out.println("playerPosition: "+this.playingPosition);
	}
}

class Playerinheritance {

	public static void main(String[] args) {
		Player p1=new Player("Sachin Tendulkar",55,"India",289,1);
		Cricketplayer c1= new Cricketplayer("M.S.Dhoni",51,"India",270,7,20000,259,"rightHand","no");
		FootballPlayer fp1= new FootballPlayer("ronaldo",45,"Portugal",170,7,356,2);
				p1.display();
				c1.display();
				fp1.display();
	}

}
