package inheritancepractice;

class Vehicle{
	int vehicleNumber;
	String model;
	String companyName;
	int noofWheels;
	double price;
	
	Vehicle()
	{
		this.vehicleNumber=00;
		this.model="NA";
		this.companyName="NA";
		this.noofWheels=00;
		this.price=00;
		
	}
	
	Vehicle(int vehicleNumber, String model, String companyName, int noofWheels,double price) {
		super();
		this.vehicleNumber = vehicleNumber;
		this.model = model;
		this.companyName = companyName;
		this.noofWheels=noofWheels;
		this.price = price;
	}

	int getVehicleNumber() {
		return vehicleNumber;
	}

	void setVehicleNumber(int vehicleNumber) {
		this.vehicleNumber = vehicleNumber;
	}

	String getModel() {
		return model;
	}

	void setModel(String model) {
		this.model = model;
	}

	String getCompanyName() {
		return companyName;
	}

	void setCompanyName(String companyName) {
		this.companyName = companyName;
	}

	int getNoofWheels() {
		return noofWheels;
	}

	void setNoofWheels(int noofWheels) {
		this.noofWheels = noofWheels;
	}

	double getPrice() {
		return price;
	}

	void setPrice(double price) {
		this.price = price;
	}
	
	void display()
	{
		System.out.println("Vehicle number: "+this.vehicleNumber);
		System.out.println("vehicle Model: "+this.model);
		System.out.println("Company Name: "+this.companyName);
		System.out.println("Vehicle Wheels: "+this.noofWheels);
		System.out.println("Vehicle Price: "+this.price);
	}
	
	
}
//Vehicle supper class end;

class Bike extends Vehicle{
	int noofStand;
	int noofHelmate;
	String bikeCategory;
	Bike() {
		super();
		this.noofStand=00;
		this.noofHelmate=00;
		this.bikeCategory="NA";
	}
	Bike(int vehicleNumber, String model, String companyName, int noofWheels,double price,int noofStand,int noofHelmate,String bikeCategeory) {
		super(vehicleNumber, model, companyName,noofWheels, price);
		this.noofStand=noofStand;
		this.noofHelmate=noofHelmate;
		this.bikeCategory=bikeCategeory;
	}
	int getNoofStand() {
		return noofStand;
	}
	void setNoofStand(int noofStand) {
		this.noofStand = noofStand;
	}
	int getNoofHelmate() {
		return noofHelmate;
	}
	void setNoofHelmate(int noofHelmate) {
		this.noofHelmate = noofHelmate;
	}
	String getBikeCategory() {
		return bikeCategory;
	}
	void setBikeCategory(String bikeCategory) {
		this.bikeCategory = bikeCategory;
	}	
	void display()
	{
	    super.display();
		System.out.println("Vehicle Sands: "+this.noofStand);
		System.out.println("Vehicle Helmate: "+this.noofHelmate);
		System.out.println("vehicle Categeory: "+this.bikeCategory);
		
	}
}
//bike subClass end;

class Car extends Vehicle{
	String hasPowerSteering ;
	String driveMode;
	String parkingAssistSensors;
	Car() {
		super();
		this.hasPowerSteering="NA";
		this.driveMode="NA";
		this.parkingAssistSensors="NA";
		
	}
	Car(int vehicleNumber, String model, String companyName, int noofWheels, double price,String hasPowerSteering,String driveMode,String parkingAssistSensors) {
		super(vehicleNumber, model, companyName, noofWheels, price);
		this.hasPowerSteering=hasPowerSteering;
		this.driveMode=driveMode;
		this.parkingAssistSensors=parkingAssistSensors;
	}
	String getHasPowerSteering() {
		return hasPowerSteering;
	}
	void setHasPowerSteering(String hasPowerSteering) {
		this.hasPowerSteering = hasPowerSteering;
	}
	String getDriveMode() {
		return driveMode;
	}
	void setDriveMode(String driveMode) {
		this.driveMode = driveMode;
	}
	String getParkingAssistSensors() {
		return parkingAssistSensors;
	}
	void setParkingAssistSensors(String parkingAssistSensors) {
		this.parkingAssistSensors = parkingAssistSensors;
	}
	void display()
	{
		super.display();
		System.out.println("vehicle powerSteering: "+this.hasPowerSteering);
		System.out.println("vehicle driveMode: "+this.driveMode);
		System.out.println("vehicle park Sensor: "+this.parkingAssistSensors);
		
	}
	
	
}
//Car subClass end;

class Bus extends Vehicle{
	int passengerCapacity;
	int standingCapacity;
	Bus() {
		super();
		this.passengerCapacity=00;
		this.standingCapacity=00;
	}
	 Bus(int vehicleNumber, String model, String companyName, int noofWheels, double price, int passengerCapacity,int standingCapacity) {
		super(vehicleNumber, model, companyName, noofWheels, price);
		this.passengerCapacity=passengerCapacity;
		this.standingCapacity=standingCapacity;
	}
	 int getPassengerCapacity() {
		 return passengerCapacity;
	 }
	 void setPassengerCapacity(int passengerCapacity) {
		 this.passengerCapacity = passengerCapacity;
	 }
	 int getStandingCapacity() {
		 return standingCapacity;
	 }
	 void setStandingCapacity(int standingCapacity) {
		 this.standingCapacity = standingCapacity;
	 }
	
	 void display()
	 {
		 super.display();
		 System.out.println("vehicle passengerCapacity: "+this.passengerCapacity);
		 System.out.println("vehicle sandingCapacity: "+this.standingCapacity);
	 }
	
}
//bus subclass end;

class Vehicleinheritance{

	public static void main(String[] args) {
		Vehicle v1=new Vehicle(4454,"Tata Signa","Tata",12,5600000);
		Bike b1=new Bike(335,"ZX10r","kawasaki",2,1800000,1,1,"sport");
		Car c1= new Car(669,"ScorpioS11","Mahindra",4,2000000,"yes","normal","yes");
		Bus bs1=new Bus(2332,"starBus","Tata",6,3500000,40,20);
		v1.display();
		b1.display();
		c1.display();
		bs1.display();
		

	}

}
