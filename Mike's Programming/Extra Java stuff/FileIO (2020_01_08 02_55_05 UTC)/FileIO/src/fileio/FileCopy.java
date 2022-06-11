package fileio;
import java.io.*;
import java.util.Scanner;
import javax.swing.*;

public class FileCopy {

	public static void main(String[] args) {
		
		Scanner fileIn = null;
		PrintWriter fileOut = null;
		

		
		try{

		JFileChooser chooser = new JFileChooser();
		
		chooser.showOpenDialog(null);
		File fIn = chooser.getSelectedFile();
		
		
		chooser.showSaveDialog(null);
		File fOut = chooser.getSelectedFile();
		
		
		fileIn = new Scanner(fIn);
		fileOut = new PrintWriter(fOut);
		
		while(fileIn.hasNextLine()){
			String line = fileIn.nextLine();
			fileOut.println(line);
		}
		
		}
		catch(FileNotFoundException e){
			System.out.println("Your file wasn't found!!");
		}
		catch(IOException e){
			System.out.println("An error has occurred with your file.");
		}
		finally{
			fileIn.close();
			fileOut.close();
		}
		
	}

}
