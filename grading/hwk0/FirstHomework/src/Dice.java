public class Dice {
    
    int diceSides;

    public Dice(){
        diceSides = 6;
    }

    public Dice(int n){
       diceSides = n; 
    }

    public int roll(){
        int diceRoll;
        int min = 1;
        diceRoll = (int) Math.floor(Math.random()*(diceSides-min+1)+min);
        return diceRoll;
    }
}
