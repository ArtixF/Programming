package question3;

public class Die {

	//creating values to hold the number of sides and value of the roll
		private int sides;
		private int diceRoll;
		////////////
		
		//////setting the sides of the dice and giving them a value between 1 and that number
		public Die(){
			sides = 6;
			roll();
		}
		
		public Die(int numSides2){
			sides = numSides2;
			roll();
		}
		
		public void roll()
		{
			diceRoll = (int)(Math.random()*(sides)+1);
		}
		
		
		public int getSides()
		{
			return sides;
		}
		
		
		public int getSideUp()
		{
			return diceRoll;
		} 
		/////////
		
		/////creating a to string to print number of sides and values of the dice
		public String toString()
		{
			String str = "die[" + getSides() + " sides, value=" + getSideUp() + "]";
			return str;
		}
		////////
}
