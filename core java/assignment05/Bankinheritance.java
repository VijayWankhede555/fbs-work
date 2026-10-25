
class Bank{
	int accNumber;
	String accHolderName;
	double balance;
	Bank() {

		this.accNumber=00;
		this.accHolderName="NA";
		this.balance=00;
			
	}
	Bank(int accNumber, String accHolderName, double balance) {
		
		this.accNumber = accNumber;
		this.accHolderName = accHolderName;
		this.balance = balance;
	}
	int getAccNumber() {
		return accNumber;
	}
	void setAccNumber(int accNumber) {
		this.accNumber = accNumber;
	}
	String getAccHolderName() {
		return accHolderName;
	}
	void setAccHolderName(String accHolderName) {
		this.accHolderName = accHolderName;
	}
	double getBalance() {
		return balance;
	}
	void setBalance(double balance) {
		this.balance = balance;
	}
	void display()
	{
		System.out.println("account number: "+this.accNumber);
		System.out.println("account holder name: "+this.accHolderName);
		System.out.println("accoun balance: "+this.balance);
		
	}
}
//bank superClass end;

class Savingsaccount extends Bank{
	double interestRate;
	double minimumBalance;
	double withDrawlimit;
	Savingsaccount() {
		super();
		this.interestRate=00;
		this.minimumBalance=00;
		this.withDrawlimit=00;
	}
	Savingsaccount(int accNumber, String accHolderName, double balance,double interestRate,double minimumBalance,double withDrawlimit) {
		super(accNumber, accHolderName, balance);
		this.interestRate=interestRate;
		this.minimumBalance=minimumBalance;
		this.withDrawlimit=withDrawlimit;
	}
	double getInterestRate() {
		return interestRate;
	}
	void setInterestRate(double interestRate) {
		this.interestRate = interestRate;
	}
	double getMinimumBalance() {
		return minimumBalance;
	}
	void setMinimumBalance(double minimumBalance) {
		this.minimumBalance = minimumBalance;
	}
	double getWithDrawlimit() {
		return withDrawlimit;
	}
	void setWithDrawlimit(double withDrawlimit) {
		this.withDrawlimit = withDrawlimit;
	}
	void display()
	{
		super.display();
		System.out.println("interest Rate: "+this.interestRate);
		System.out.println("minimum Balance: "+this.minimumBalance);
		System.out.println("withDraw limit: "+this.withDrawlimit);
	}	
}
//SavingAccount subClass end here;

class Currentaccount extends Bank{
		double overdraftLimit;
		String businessName;
		double transactionLimit;
		Currentaccount() {
			super();
			this.overdraftLimit=00;
			this.businessName="NA";
			this.transactionLimit=00;
		}
		Currentaccount(int accNumber, String accHolderName, double balance,double overdraftLimit,String businessName,double transactionLimit) {
			super(accNumber, accHolderName, balance);
			this.overdraftLimit=overdraftLimit;
			this.businessName=businessName;
			this.transactionLimit=transactionLimit;
		}
		double getOverdraftLimit() {
			return overdraftLimit;
		}
		void setOverdraftLimit(int overdraftLimit) {
			this.overdraftLimit = overdraftLimit;
		}
		String getBusinessName() {
			return businessName;
		}
		void setBusinessName(String businessName) {
			this.businessName = businessName;
		}
		double getTransactionLimit() {
			return transactionLimit;
		}
		void setTransactionLimit(double transactionLimit) {
			this.transactionLimit = transactionLimit;
		}
		
		void display()
		{
			super.display();
			System.out.println("overdraft limit: "+this.overdraftLimit);
			System.out.println("business Name: "+this.businessName);
			System.out.println("trasaction limit: "+this.transactionLimit);
			
		}
}
//currentAcount subclass end;

class Fixeddiposite extends Bank{
	double depositAmount;
	String maturityPeriod;
	double maturityAmount;
	Fixeddiposite() {
		super();
		this.depositAmount=00;
		this.maturityPeriod="NA";
		this.maturityAmount=00;
	}
	Fixeddiposite(int accNumber, String accHolderName, double balance,double depositAmount,String maturityPeriod,double maturityAmount) {
		super(accNumber, accHolderName, balance);
		this.depositAmount=depositAmount;
		this.maturityPeriod=maturityPeriod;
		this.maturityAmount=maturityAmount;
	}
	double getDepositAmount() {
		return depositAmount;
	}
	void setDepositAmount(double depositAmount) {
		this.depositAmount = depositAmount;
	}
	String getMaturityPeriod() {
		return maturityPeriod;
	}
	void setMaturityPeriod(String maturityPeriod) {
		this.maturityPeriod = maturityPeriod;
	}
	double getMaturityAmount() {
		return maturityAmount;
	}
	void setMaturityAmount(double maturityAmount) {
		this.maturityAmount = maturityAmount;
	}
	
	void display()
	{
		super.display();
		System.out.println("depostite Account: "+this.depositAmount);
		System.out.println("MaturityPeriod: "+this.maturityPeriod);
		System.out.println("MaturityAccount: "+this.maturityAmount);	
	}
}
//fixeddiposite subClass end;

class Bankinheritance {

	public static void main(String[] args) {
		Bank b1=new Bank(234554,"Vijay",89000);
		Savingsaccount s1=new Savingsaccount(2334,"satish",56900,2356,500,20000);
		Currentaccount c1=new Currentaccount(2333,"shubham",78990000,1500,"wankhede construction",10000000);
		Fixeddiposite f1=new Fixeddiposite(3344,"sahdev",459900,34000,"3year",32000);
		b1.display();
		s1.display();
		c1.display();
		f1.display();
	
	}

}
