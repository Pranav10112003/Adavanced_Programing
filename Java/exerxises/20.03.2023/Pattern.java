package com.amrita.Pattern;

public class Pattern {
    public static void main(String[] args) {
        for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= 5; j++) {
                System.out.print("* ");
            }
            System.out.println("===================================");
            if (i % 2 == 1) {
                System.out.print(" ");
            }
        }
        for (int i = 1; i <= 6; i++) {
            System.out.println("===================================");
        }
    }
}

