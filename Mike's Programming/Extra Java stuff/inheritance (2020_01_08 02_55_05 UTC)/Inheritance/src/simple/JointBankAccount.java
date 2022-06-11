package simple;

public class JointBankAccount extends BankAccount{
	
	//Rule 1: data fields from the super (parent)
	//class are automatically available in the 
	//sub (child) class.
	
	//Rule 2: Sub class MAY add its own data fields
	private String jointName;
	
	//Rule 3: Constructors are NEVER inherited.
	
	public JointBankAccount(){
		super();
		jointName = "Aaron";
	}
	
	public JointBankAccount(
			int num, double bal, String name,String jn){
		super(bal,name,num);
		this.jointName = jn;
	}

	//Rule 4: all methods from the super class are 
	//available to the sub class.
	
	//Rule 5: sub classes MAY define any new methods
	//required.
	public String getJointName(){ return jointName; }
	
	//Rule 6: any methods that are inherited by the 
	//sub class MAY be overridden in the subclass.
	public String toString(){
		return "JointBankAccount["+super.toString()+
				"," + jointName + "]";
	}
	
}
