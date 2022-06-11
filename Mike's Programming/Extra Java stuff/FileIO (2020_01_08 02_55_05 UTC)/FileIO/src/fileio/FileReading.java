package fileio;
import java.io.*;
import java.util.Scanner;
import java.util.ArrayList;

public class FileReading {

	public static void main(String[] args) throws IOException{
		ArrayList<Long> list = new ArrayList<Long>();
		
		Scanner fIn = new Scanner(new File("factorial.txt"));
		while(fIn.hasNextLong()){
			long x = fIn.nextLong();
			list.add(x);
		}
		System.out.println(list);
		
		fIn.close();
		 
	}

}
