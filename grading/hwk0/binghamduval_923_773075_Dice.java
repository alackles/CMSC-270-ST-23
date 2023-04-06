import java.util.Random;
public class Dice {
    private int sideNumber;
    private Random rand;
    public Dice() {
        this.rand = new Random();
        sideNumber = 6;
    }
    public Dice(int sides){
        this.rand = new Random();
        sideNumber = sides;
    }
    public int roll(){
        return rand.nextInt(sideNumber)+1;
    }
    public static void main(String[] args){
        Dice D8 = new Dice(8);
        for (int n=0; n<3; n++){
            int outcome = D8.roll();
            System.out.println(outcome);
        }
    }
}