package simple;

public class BankAccount {

	private int number;
	private double balance;
	private String name;
	
	public BankAccount(){
		balance = 100;
		name = "Aaron";
		number = 0;
	}
	
	public BankAccount(double bal, String n, int num){
		balance = bal;
		name = n;
		number = num;
	}
	
	public String getName(){ return name; }
	public double getBalance(){ return balance; }
	public int getNumber(){ return number; }
	
	public void deposit(double d){ balance += d; }
	public void withdraw(double w){ balance -= w; }
	
	public String toString(){
		return "BankAccount[$" + balance + "," + 
				name + "," + number + "]";
	}
	
}
