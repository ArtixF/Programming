package recursion;

public class RecursionExamples {

	public static void main(String[] args) {
		//HelloWorld(0);
		System.out.println(factorial(10));
		System.out.println(rFactorial(10));
		for(int i = 0; i<25; i++)
			System.out.println(rFib(i));

	}
	
	public static long rFib(long n){
		//base case
		if(n == 0 || n == 1)
			return n;
		//recursive case
		else
			return rFib(n-1) + rFib(n-2);
		
	}
	
	public static double rFactorial(double n){
		if(n == 0 || n == 1){
			return 1;  //do no work.  CS case.  Base case
		}
		else{  //recursive case
			return n * rFactorial(n-1);
		}
	}
	
	public static double factorial(double n){
		double fac = 1;
		for(double i = 1; i<=n; i++)
			fac *= i;
		return fac;
	}

	
	public static void HelloWorld(int count){
		count++;
		System.out.println("Hello World!" + count);
		
		if(count < 10)
			HelloWorld(count);
	}

}
