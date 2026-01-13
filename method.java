import java.util.*;

public class main {
    public static void main(String args[]) {
        // Methods cannot be defined inside other methods in Java.
        // They must be static to be called from the static main method
        // without creating an instance of the class.

        // Call the corrected methods
        vile();
        kali();
        kloop();
    }

    // --- Corrected methods below ---

    public static void vile() {
        int i = 1;
        while (i <= 5) {
            Scanner obj = new Scanner(System.in);
            System.out.println("Enter an integer:");
            // 'i' was already declared above, use another variable name.
            // Also, nextLine() returns a String, need nextInt() for an integer.
            // A try-catch block is good practice for input validation.
            try {
                int inputNum = obj.nextInt();
                System.out.println("h: " + inputNum);
            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter an integer.");
                // Consume the invalid input to prevent an infinite loop
                obj.next(); 
            }
            // Increment the loop counter to avoid an infinite loop
            i++;
        }
        // It's good practice to close the scanner after use (though often left open in simple console apps)
        // obj.close(); 
    }

    public static void kali() {
        // 'i' was defined in 'vile()' scope, not available here. Define a local 'i'.
        int i = 10; 
        do {
            System.out.println("u");
        } while (i > 8); // This loop runs once because i=10 > 8
    }

    public static void kloop() {
        int arr[] = {1, 34, 56, 67, 4, 6, 8};
        // The loop condition i<=arr.length goes out of bounds (index 7 does not exist).
        // It should be i < arr.length.
        for (int i = 0; i < arr.length; i++) {
            // This prints the index 'i', not the value at that index.
            // Use arr[i] to print the value.
            System.out.println("Value at index " + i + ": " + arr[i]);
        }
    }
}
