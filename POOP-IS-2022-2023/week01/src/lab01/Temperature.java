package lab01;

import java.util.Scanner;

public class Temperature {
    public static void main(String[] args) {
        double fahrenheit;
        double celsius;
        Scanner input = new Scanner(System.in);

        //a
        System.out.println("Enter temp in fahrenheit");
        fahrenheit = input.nextDouble();
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        System.out.print("Temp in celsius: " + celsius);

        //b
        System.out.print("\nEnter temp in celsius: ");
        celsius = input.nextDouble();
        fahrenheit = 9.0 / 5.0 * celsius + 32;
        System.out.printf("%s %.1f", "Temp in fahrenheit:", fahrenheit);

        //c
        System.out.println("\nEnter 1 to F to C or 2 for C to F");
        int choice = input.nextInt();

        if (choice == 1) {
            System.out.print("Enter temp in fahrenheit");
            fahrenheit = input.nextDouble();
            celsius = 5.0 / 9.0 * (fahrenheit - 32);
            System.out.print("Temp in celsius: " + celsius);
        } else if (choice == 2) {
            System.out.print("\nEnter temp in celsius: ");
            celsius = input.nextDouble();
            fahrenheit = 9.0 / 5.0 * celsius + 32;
            System.out.printf("%s %.1f", "Temp in fahrenheit:", fahrenheit);
        } else {
            System.out.println("Invalid user choice!");
        }

    }
}
