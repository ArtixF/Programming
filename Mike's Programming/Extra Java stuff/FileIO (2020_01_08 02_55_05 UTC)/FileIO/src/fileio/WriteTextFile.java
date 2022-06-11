package fileio;
import java.io.*;
import java.util.Scanner;

/**
   This program opens a binary file and writes the contents
   of an int array to the file.
*/

public class WriteTextFile
{
   public static void main(String[] args)
                      throws IOException
   {
      // An array to write to the file
      int[] numbers = { 2, 4, 6, 8, 10, 12, 14 };
      
      // Create the Scanner output objects.
      PrintWriter fOut = new PrintWriter(new File("Numbers.txt"));
    
      System.out.println("Writing the numbers to the file...");

      // Write the array elements to the file.    
      for (int i = 0; i < 1000000; i++)
          fOut.println((Math.random()*100));
    
      System.out.println("Done.");
      
      // Close the file.
      fOut.close();   
   }
}

