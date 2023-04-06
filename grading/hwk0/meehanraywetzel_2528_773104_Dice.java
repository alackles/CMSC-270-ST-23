//Write a Java program that simulates rolling an n-sided die 
//via the use of a Dice class. 
//The Dice class should have a default constructor that initializes the dice with 6 sides
//as well as a value constructor that initializes the dice with n sides 
//where n is taken as an integer argument to the constructor. 
//It should also have an instance method roll() that randomly selects a number 
//from 1 to n and returns that value. 
//Roll the same dice object 3 times and print the results to System.out.

import java.util.Random;



public class Dice {
    
    Random r = new Random();
    
    private int sides;

    public Dice(int s){
        this.sides = s;
    }
    public Dice(){
        this.sides = 6;
    }

    public void setSides(int i){
        sides = i;
    }
    public int roll(){
        int j = r.nextInt(this.sides);
        return j;
    }
    
    public static void main(String[] args){
        Dice die = new Dice();
        

        System.out.println(die.roll());
        System.out.println(die.roll());
        System.out.println(die.roll());
        


    }
    

}