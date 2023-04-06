package hw0q4;

import java.util.Random;

public class Dice {
    private int numberOfSides;
    private int faceValue;
    
    public Dice(){
        this.numberOfSides = 6;
    }
    
    public Dice(int n){
        this.numberOfSides = n;
    }
    
    public int roll(){
        Random rand = new Random();
        this.faceValue = rand.nextInt(this.numberOfSides) + 1;
        return this.faceValue;
    }
}
