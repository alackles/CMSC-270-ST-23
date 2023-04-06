package hw0q4;

public class HW0Q4 {

    public static void main(String[] args) {
        Dice dice = new Dice();
        for (int i=0; i<3;i++){
            int faceValue = dice.roll();
            System.out.println(faceValue);
        }
    }
    
}
