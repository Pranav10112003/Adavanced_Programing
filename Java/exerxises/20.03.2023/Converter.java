package com.amrita.Converter;

import java.util.Scanner;

public class Converter {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int decimal;

        
        System.out.print("Enter a decimal number: ");
        while (!input.hasNextInt()) {
            System.out.println("Error: Invalid input! Please enter an integer.");
            input.next();
        }
        decimal = input.nextInt();

        if (decimal < 0) {
            System.out.println("Error: Negative input is not allowed!");
            return;
        }

        
        String binary = Integer.toBinaryString(decimal);
        String hexadecimal = Integer.toHexString(decimal);

        
        System.out.println(decimal + " in binary is " + binary);
        System.out.println(decimal + " in hexadecimal is " + hexadecimal);
    }
}

