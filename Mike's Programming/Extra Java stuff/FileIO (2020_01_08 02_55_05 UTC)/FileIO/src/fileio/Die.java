package fileio;

/**
 * 
 * @author Aaron Langille the first of his name, king of the beardless.
 * 
 * This object class represents a die object.
 *
 */

public class Die {

	//Data fields
	private int numSides;
	private int sideUp;
	private static int numDice;
	
	/**
	 * Default, no-argument constructor.  Creates a d6.
	 */
	public Die(){
		this(6);
	}
	
	public Die(Die in){
		this.numSides = in.numSides;
		this.sideUp = in.sideUp;
	}
	
	/**
	 * Argumented constructor.
	 * @param numSides sets the number of sides on the die.
	 */
	public Die(int numSides){
		if(numSides == 4 || numSides == 6 || numSides == 12 || 
				numSides == 20 || numSides == 100)	
			this.numSides = numSides;
		else
			throw new IllegalArgumentException("Invalid number of sides");
		numDice++;
		roll();
	}
	
	/**
	 * Sets the die to a random side showing.
	 */
	public int roll(){
		sideUp = (int)(Math.random()*numSides)+1;
		return sideUp;
	}
	
	/**
	 * Return the number of sides on the die.
	 * @return number of sides.
	 */
	public int getNumSides(){ return numSides; }
	
	/**
	 * Return the side that is showing.
	 * @return current side up.
	 */
	public int getSideUp(){ return sideUp; }
	
	/**
	 * Standard toString method.
	 */
	
	public String toString(){
		return "Die[" + numSides + ", " + sideUp + "]";
	}
	
	
	public int getNumDice(){
		return numDice;
	}
	/*
	public boolean equals(Die in){
		return numSides == in.numSides && sideUp == in.sideUp;
					
	}
	*/
	
}
