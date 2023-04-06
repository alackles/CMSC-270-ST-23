package HWK0;

class Q5 {

    public static void main(String[] args){
        Dice d6 = new Dice();
        for (int i = 0; i < 3; i++){
            System.out.println(d6.roll());
        }

        Dice d20 = new Dice(20);
        for (int i = 0; i < 3; i++){
            System.out.println(d20.roll());
        }
    }

}

class Dice{
    private int sides;
    
    Dice() {
        this.sides = 6;
    }

    Dice(int n){
        this.sides = n;
    }

    public int roll(){
        int roll= (int) (Math.random() * this.sides) + 1; 
        return roll;
    }
}


