public class Dice {
    private int numSides;
    
    public Dice(){
        numSides = 6;
    } // default constructor with a 6 sided die
    
    public Dice(int sides){
        numSides = sides;
    } // specialized constructor with a n sided die
    
    public int roll(){
        int out;
        out = (int) (Math.random()*numSides) + 1;
        return out;
    } // roll the die
    
    public static void main(String args[]){ // main method
       Dice dieA;
       dieA = new Dice(20);
       int rollA, rollB, rollC;
       rollA = dieA.roll();
       rollB = dieA.roll();
       rollC = dieA.roll();
       System.out.println(rollA+" "+rollB+" "+rollC);
       
       System.out.println("Random dnd stat generator, was having fun with java.");
       Dice dieB;
       dieB = new Dice();
       int[] stats = new int[6];
       for(int i = 0; i < stats.length; i++){
           int[]rolls = new int[4];
            rolls[0] = dieB.roll();
            rolls[1] = dieB.roll();
            rolls[2] = dieB.roll();
            rolls[3] = dieB.roll();
            for(int j = 0; j < rolls.length; j++){
                if(rolls[j] <= rolls[0] && rolls[j] <= rolls[1] && rolls[j] <= rolls[2] && rolls[j] <= rolls[3]){
                    rolls[j] = 0; //If I set whichever one is lowest to zero immediately then it is set in as the lowest for the rest of the loops, then I just add the others together. 
                }
            }
            stats[i] = rolls[0]+rolls[1]+rolls[2]+rolls[3];
            System.out.println(stats[i]);
            
       }
       
       
   }
}
