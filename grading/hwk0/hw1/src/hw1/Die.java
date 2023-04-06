/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package hw1;

/**
 *
 * @author eugenesegbefia
 */
public class Die {

    int size = 0;

    public Die() {
        this.size = 6;
    }

    public Die(int n) {
        this.size = n;

    }
   public int roll() {
        int num = (int) (Math.random() * size) + 1;
        return num;
    }

}

