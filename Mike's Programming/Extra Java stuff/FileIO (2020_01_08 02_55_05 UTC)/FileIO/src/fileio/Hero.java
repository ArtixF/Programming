package fileio;

public class Hero {
	
	private String name;
	private String career;
	private int health;
	private int baseAttack;
	private int extraAttack;
	private String[] afflictions;
	private int numAfflictions;
	
	/**
	 * Single argument constructor.
	 * @param name name of the hero.
	 */
	public Hero(String name, String career, int health){
		
		this.name = name;
		this.career = career;
		
		//arbitrary settings.  A more argumented constructor could help here.
		this.health = health;
		baseAttack = 6;
		extraAttack = 10;
		afflictions = new String[5];
		
		//set afflictions to blank instead of null
		for(int i = 0; i<afflictions.length; i++){
			afflictions[i] = "";
		}
		numAfflictions = 0;
		
	}
	
	/**
	 * Determines what afflictions the hero currently has and reduces health accordingly.
	 */
	public void processAfflictions(){
		baseAttack = 6;
		extraAttack = 10;
		for(int i = 0; i<numAfflictions; i++){
			if(afflictions[i].equals("chewed"))
				health -= 3;
			else if(afflictions[i].equals("scared")) {
				baseAttack /= 2;
				extraAttack /= 2;
			}
			else if(afflictions[i].equals("seen")) {
				baseAttack = 0;
				extraAttack = 0;
			}
			else
				throw new IllegalStateException("Something is wrong with your hero that i cannot diagnose.  Looks serious.");
		}
		numAfflictions = 0;
	}
	
	/**
	 * Damage inflicted by an opponent.
	 * @param damage amount of health to be reduced.
	 */
	public void takeDamage(int damage){
		health -= damage;
	}
	
	/**
	 * Amount of damage to inflict on an opponent.
	 * @return damage inflicted on opponent.
	 */
	public int dealDamage(){
		return (int)((Math.random() * extraAttack) + baseAttack);
	}
	
	/**
	 * An affliction has been dealt by an opponent.  We'll store them here for processing.
	 * @param affliction particular affliction.
	 * @throws IllegalStateException if there is no more room for afflictions.
	 * @throws IllegalArgumentException if affliction is not lasered, chewed or poisoned.
	 */
	public void becomeAfflicted(String affliction){
		if(numAfflictions > afflictions.length){
			throw new IllegalStateException("Too many afflictions.  Your hero can only take so much!");
		}
		if(!(affliction.equals("seen") || affliction.equals("chewed") || affliction.equals("scared")))
			throw new IllegalArgumentException("This is a scary and unknown affliction.  Let's ignore it for now and hope for the best.");
		
		afflictions[numAfflictions] = affliction;
		numAfflictions++;
	}
	
	/**
	 * Amount of health
	 * @return health
	 */
	public int getHealth(){ return health; }
	
	/**
	 * Name of hero
	 * @return name
	 */
	public String getName() { return name; }
	
	/**
	 * Number of afflictions currently.
	 * @return number of afflictions
	 */
	public int getNumAfflictions() { return numAfflictions; }
	
	/**
	 * String representation of afflictions.
	 * @return all afflictions as a string.
	 */
	public String getAfflictions() {
		String result = "";
		for(int i = 0; i<numAfflictions; i++){
			if(i < numAfflictions - 1)
				result += afflictions[i] + ", ";
			else
				result += afflictions[i];
		}
		if (result.equals(""))
			result = "affliction - free!";
		return result;
	}
	
	/**
	 * Determine if Hero is dead.
	 * @return true if dead, otherwise false. 
	 */
	public boolean isDead(){return health <= 0; }
	
	/**
	 * Standard toString() method.
	 */
	public String toString(){
		return "Hero[" + name + ", " + health + ", (" + getAfflictions() + ")]";
	}

}
