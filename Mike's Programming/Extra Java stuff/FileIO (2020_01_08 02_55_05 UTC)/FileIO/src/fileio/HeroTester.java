package fileio;
import java.util.ArrayList;
import java.util.Scanner;
import java.io.*;


public class HeroTester {

	public static void main(String[] args) throws IOException{
		ArrayList<Hero> heroList = new ArrayList<Hero>();
		
		Scanner fileIn = new Scanner(new File("heroes.txt"));
		
		while(fileIn.hasNextLine()){
			try{
			String hero = fileIn.nextLine();
			String[] arguments = hero.split(",");
			heroList.add(new Hero(arguments[0],
									arguments[1],
									Integer.parseInt(arguments[2])));
			}
			catch(NumberFormatException e){
				System.out.println("Incorrect hero issues.");
			}
			
		}
		
		PrintWriter fileOut = new PrintWriter(new File("heroResults.txt"));
		
		for(int i = 0; i<heroList.size(); i++){
			fileOut.println(heroList.get(i) + ":" + heroList.get(i).isDead());
		}
		
		fileIn.close();
		fileOut.close();
		
		System.out.println("Program complete.");

	}

}
