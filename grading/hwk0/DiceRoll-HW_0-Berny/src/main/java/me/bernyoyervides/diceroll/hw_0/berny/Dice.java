package me.bernyoyervides.diceroll.hw_0.berny;

public class Dice {
    int value;
   Dice(){
        value = 6;
}
   Dice(int n){
       value = n;
       
   }
   int roll(){
       return (int) (Math.random() * value + 1);
   }
}
