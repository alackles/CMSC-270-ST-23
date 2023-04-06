import java.util.Arrays;

public class DiceGame{

    public static void letsRoll(Integer numRolls, Integer diceSides){
        Dice currentDice = new Dice(diceSides);
        Integer[] diceResults = new Integer[numRolls];
        for(Integer i = 0; i < numRolls; i++){
            Integer rollResult = currentDice.Roll();
            diceResults[i] = rollResult;
        }
        
        System.out.println(currentDice + ". Roll Results: " + Arrays.toString(diceResults));
    }

    public static void main(String[] args){
        Integer numRolls = Integer.valueOf(args[0]);
        Integer diceSides = Integer.valueOf(args[1]);
        letsRoll(numRolls, diceSides);
    }
}