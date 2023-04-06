public class Dice {
    private int sides;

    public Dice() {
        this.sides = 6;
    }

    public Dice(int sides) {
       this.sides = sides;
    }

    public int roll() {
        return (int) (1 + Math.random() * this.sides);
    }
}
