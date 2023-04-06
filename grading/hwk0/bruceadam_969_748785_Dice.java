import java.util.*;

public class Dice{

    private Integer totalSides;
    private Random rollNumber;

    public Dice(){
        this.totalSides = 6;
    }

    public Dice(Integer diceSides){
        this.totalSides = diceSides;
    }

    public Integer Roll(){
        this.rollNumber = new Random();
        return this.rollNumber.nextInt(0, this.totalSides + 1);
    }

    public String toString(){
        return "Dice Sides " + this.totalSides;
    }






}