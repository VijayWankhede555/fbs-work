
class Electronic{
	String brand;
	double price;
	int powerConsumption;
	Electronic() {
		
		this.brand="NA";
		this.price=00;
		this.powerConsumption=00;
	}
	Electronic(String brand, double price, int powerConsumption) {
		
		this.brand = brand;
		this.price = price;
		this.powerConsumption = powerConsumption;
	}
	String getBrand() {
		return brand;
	}
	void setBrand(String brand) {
		this.brand = brand;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		this.price = price;
	}
	int getPowerConsumption() {
		return powerConsumption;
	}
	void setPowerConsumption(int powerConsumption) {
		this.powerConsumption = powerConsumption;
	}
	
	void display()
	{
		System.out.println("electronic brand: "+this.brand);
		System.out.println("electronic price: "+this.price);
		System.out.println("electronic powerConsumption "+this.powerConsumption);
	}
}
//electronic super class end;

class Samrtphone extends Electronic{
	String operatingSystem;
	String storageCapacity;
	String camerapixel;
	Samrtphone() {
		super();
		this.operatingSystem="NA";
		this.storageCapacity="NA";
		this.camerapixel="NA";
		
	}
	Samrtphone(String brand, double price, int powerConsumption,String operatingSystem,String storageCapacity,String camerapixel) {
		super(brand, price, powerConsumption);
		this.operatingSystem=operatingSystem;
		this.storageCapacity=storageCapacity;
		this.camerapixel=camerapixel;
	}
	String getOperatingSystem() {
		return operatingSystem;
	}
	void setOperatingSystem(String operatingSystem) {
		this.operatingSystem = operatingSystem;
	}
	String getStorageCapacity() {
		return storageCapacity;
	}
	void setStorageCapacity(String storageCapacity) {
		this.storageCapacity = storageCapacity;
	}
	String getCamerapixel() {
		return camerapixel;
	}
	void setCamerapixel(String camerapixel) {
		this.camerapixel = camerapixel;
	}
	
	void display()
	{
		super.display();
		System.out.println("operatingSystem: "+this.operatingSystem);
		System.out.println("StorageCapacity: "+this.storageCapacity);
		System.out.println("Camerapixel: "+this.camerapixel);
	}
}
//smartphone subClass end;

class Laptop extends Electronic{
	String processor;
	String ram;
	int batteryCapacity;
	Laptop() {
		super();
		this.processor="NA";
		this.ram="NA";
		this.batteryCapacity=00;
	}
	Laptop(String brand, double price, int powerConsumption,String processor,String ram,int batteryCapacity) {
		super(brand, price, powerConsumption);
		this.processor=processor;
		this.ram=ram;
		this.batteryCapacity=batteryCapacity;
	}
	String getProcessor() {
		return processor;
	}
	void setProcessor(String processor) {
		this.processor = processor;
	}
	String getRam() {
		return ram;
	}
	void setRam(String ram) {
		this.ram = ram;
	}
	int getBatteryCapacity() {
		return batteryCapacity;
	}
	void setBatteryCapacity(int batteryCapacity) {
		this.batteryCapacity = batteryCapacity;
	}
	void display()
	{
		super.display();
		System.out.println("processor: "+this.processor);
		System.out.println("ram: "+this.ram);
		System.out.println("batteryCapacity: "+this.batteryCapacity);
	}
}
//Laptop subClass end;

class Telivision extends Electronic 
{
	double screenSize;
	String displayType;
	String resolution;
	Telivision() {
		super();
		this.screenSize=00;
		this.displayType="NA";
		this.resolution="NA";
	}
	Telivision(String brand, double price, int powerConsumption,double screenSize,String displayType,String resolution) {
		super(brand, price, powerConsumption);
		this.screenSize=screenSize;
		this.displayType=displayType;
		this.resolution=resolution;
	}
	double getScreenSize() {
		return screenSize;
	}
	void setScreenSize(double screenSize) {
		this.screenSize = screenSize;
	}
	String getDisplayType() {
		return displayType;
	}
	void setDisplayType(String displayType) {
		this.displayType = displayType;
	}
	String getResolution() {
		return resolution;
	}
	void setResolution(String resolution) {
		this.resolution = resolution;
	}
	
	void display()
	{
		super.display();
		System.out.println("screenSize: "+this.screenSize);
		System.out.println("displayType: "+this.displayType);
		System.out.println("resolution: "+this.resolution);
	}
}
//telivision suClass end;

class Electronicinheritance {

	public static void main(String[] args) {
		Ectronic e1=new Electronic();
		Smartphone s1=new Smartphone();
		Laptop l1=new Laptop();
		Telivision t1=new Telivision();
		
		e1.display;
		s1.display();
		l1.display();
		t1.display();

	}

}
