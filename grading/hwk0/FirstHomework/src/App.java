import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {

        Scanner readScanner = new Scanner(System.in);
        System.out.println("How many sides on the dice?");

        int nSides = Integer.parseInt(readScanner.nextLine());

        Dice myDice = new Dice(nSides);

        for(int i=0;i<3;i++){
            int currentRoll = myDice.roll();
            System.out.println("Your roll is: "+ String.valueOf(currentRoll));
        }
    }
}
