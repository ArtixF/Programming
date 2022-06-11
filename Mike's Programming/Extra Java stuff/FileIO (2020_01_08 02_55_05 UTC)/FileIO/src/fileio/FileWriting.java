package fileio;
import java.io.*;  //import the file IO libraries

public class FileWriting {

	//shrug off responsibility with a throws
	public static void main(String[] args) throws IOException{
		
		int num = 10;
		PrintWriter pOut = new PrintWriter(new File("factorial.txt"));

		for(int i = 1; i<= num; i++){
			long ans = factorial(i);
			
			//create the writing machine
			//use the writing machine
			pOut.print(ans+";");
		}
		
		//close the writing machine
		pOut.close();
		System.out.println("Program complete.");
		
	}
	
	public static long factorial(long n){
		long prod = 1;
		for(long i = 1; i<=n; i++)
			prod *= i;
		return prod;
	}

}
