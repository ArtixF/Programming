//Michael Masters 0343427
//this program is designed to use recursion to calculate the number of given 
//the base and exponent, reverse a string and how many digits are in an entered 
//integer
package question5;
import java.util.Scanner;


public class Recursion {

	public static void main(String[] args) {
		//creating scanners
		Scanner input = new Scanner(System.in);
		Scanner input2 = new Scanner(System.in);
		//
		
		//collecting input from the user
		System.out.print("Enter two numbers, base then exponent:");
		int base = input.nextInt();
		int exp = input.nextInt();
		
		System.out.println("Result: " + exponent(base,exp,1) + "\n");

		
		System.out.print("Enter a string to reverse:");
		String rev = input2.nextLine();
		
		System.out.println("Result: " + reverse(rev));
		
		System.out.print("Enter a number:");
		int numtest = input2.nextInt();
		
		System.out.println("Result: " + numNum(numtest));
		//////
	}
	
	//this method uses recursion to find the number taking the base and exponent as arguments
	public static int exponent(int a, int n, int x){
		if(n == 1){
			return x *= a;
		}
		else{
			return x *= (a * exponent(a,n-1,x));
		}
	}
	///////
	
	//this method uses recursion to find the reverse of a string
	public static String reverse(String s1){
		
		String newString = "";
		String reverse = "";
		
		if (s1.length() == 1){
			return newString + s1;
		}
		else{
			
			for(int i = 0; i < (s1.length()-1); i++){
				newString += s1.charAt(i);
			}
			
			return reverse += s1.charAt(s1.length()-1) + reverse(newString);
		}
	}
	///////
	
	//this method uses recursion to find the number of digits in an integer
public static int numNum(int num1){
		
		int num2 = 0;
		String num3 = "" + num1;
		int num4 = 0;
		
		if (num1 < 10){
			return 1;
		}
		else{
			num2 = num1/10;
			return 1 + numNum(num2);
		}
	}
/////////////
}
