import java.util.Random;

class Dice {
    int sides;
    Random r = new Random();

    public Dice() {
        this.sides = 6;
    }

    public Dice(int sides) {
        this.sides = sides;
    }

    public int roll() {
        return r.nextInt(sides)+1;
    }

    public static void main(String[] args) {
        Dice die = new Dice(12);
        int result = die.roll();
        System.out.println(result);
    }
}
