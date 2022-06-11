package fileio;
import java.io.*;
import java.util.Scanner;
import java.util.ArrayList;

public class FileReading2 {

	public static void main(String[] args) throws IOException{
		
		Scanner keyb = new Scanner(System.in);
		System.out.print("Enter filename:");
		String filename = keyb.nextLine();
		Scanner fIn = new Scanner(new File(filename));
		
		while(fIn.hasNextLine()){
			String line = fIn.nextLine();
			int words = line.split(" ").length;
			int chars = line.length();
			System.out.println(words+":"+chars+", "+ line);
		}
		
		
		fIn.close();
		 
	}

}
