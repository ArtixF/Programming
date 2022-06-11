package fileio;
import java.util.ArrayList;
import java.util.Scanner;
import java.io.*;


public class DieTester {

	public static void main(String[] args) throws IOException{
		ArrayList<Die> diceBag = new ArrayList<Die>();
		
		Scanner fileIn = new Scanner(new File("dice.txt"));
		
		while(fileIn.hasNextInt()){
			int numSides = fileIn.nextInt();
			try{
				Die d1 = new Die(numSides);
				diceBag.add(d1);
			}
			catch(IllegalArgumentException e){
				System.out.println("Tried to create invalid Die.");
			}
			
		}
		
		PrintWriter fileOut = new PrintWriter(new File("dieResults.txt"));
		
		for(int i = 0; i<diceBag.size(); i++){
			fileOut.println(diceBag.get(i).roll());
		}
		
		fileIn.close();
		fileOut.close();
		
		System.out.println("Program complete.");

	}

}
