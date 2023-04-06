import java.util.Random;
public class Dice {
    private int sides;

    public void setSizeNum(int newSize){
    sides = newSize;
    
    }
    void roll( ){
        System.out.println("Your numbers are: ");
        for (int i = 0; i < 3; i++){
        Random random = new Random();
        int randNum = random.nextInt(sides) + 1;
        System.out.println(randNum);
        }
    }
}
