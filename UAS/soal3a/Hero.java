public class Hero{
	// attribut dari class Hero
	String name;
	double attackPower, health;

	// constructor untuk class Hero
	Hero(String nameInput, double attackInput, double healthInput){
		this.name = nameInput;
		this.attackPower = attackInput;
		this.health = healthInput;
	}

	// method attack dalam class hero
	void attack(Hero enemy){
		System.out.println("\n" + this.name + " attack " + enemy.name);
		enemy.takeDamage(this.attackPower);
	}

    // method take damage dalam class hero
	void takeDamage(double damage){
		System.out.println(this.name + " receive damage " + damage);
		this.health = this.health - damage;
	}

    //method untuk men-display data
	void display(){
		System.out.println("\nName: " + this.name);
		System.out.println("Health: " + this.health);
		System.out.println("Power: " + this.attackPower);
	}
}