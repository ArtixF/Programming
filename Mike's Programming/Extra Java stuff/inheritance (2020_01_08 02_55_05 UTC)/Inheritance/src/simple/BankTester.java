package simple;

public class BankTester {

	public static void main(String[] args) {

		BankAccount ba1 = new BankAccount(100, "David", 123);
		System.out.println(ba1);
		
		JointBankAccount jba1 = new JointBankAccount(
				456,1000,"David","Aaron");
		jba1.deposit(500);
		System.out.print(jba1.getBalance());
		System.out.println(jba1);
		
		
		
		
		
		
		BankAccount ba2 = new JointBankAccount(
				789,10000,"Marshall","Aaron");
		ba2.deposit(7500);
		ba2.withdraw(17250);
		System.out.println(ba2.getBalance());
		System.out.println(ba2);
		//String jn = ba2.getJointName();
		
		BankAccount[] bank = new BankAccount[5];
		for(int i = 0; i<bank.length;i++){
			if(i % 2 == 1)
				bank[i] = new JointBankAccount();
			else
				bank[i] = new BankAccount();
		}
		
		for(int i = 0; i<bank.length; i++){
			bank[i].deposit(bank[i].getBalance()*.1);
		}
		
		double sum = 0;
		for(int i = 0; i<bank.length; i++){
			sum += bank[i].getBalance();
		}
		
		for(int i = 0; i<bank.length; i++){
			System.out.println(bank[i]);
		}
		System.out.println("Sum:" + sum);


	}

}
