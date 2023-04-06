/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package hw1;

/**
 *
 * @author eugenesegbefia
 */
public class Hw1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
      Die die = new Die(21);
      int n = die.roll();
      int e = die.roll();
      int d = die.roll();
      System.out.println(n+","+e+","+d);
    }
    
}
