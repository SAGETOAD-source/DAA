class Bank {
    // Method to get interest rate
    double getInterestRate() {
        return 0; // default interest rate
    }
}

// SBI subclass
class SBI extends Bank {
    @Override
    double getInterestRate() {
        return 5.0; // SBI interest rate
    }
}

// ICICI subclass
class ICICI extends Bank {
    @Override
    double getInterestRate() {
        return 7.0; // ICICI interest rate
    }
}

// Main class
public class Banking_suite {
    public static void main(String[] args) {

        // Runtime polymorphism: Bank reference, child objects
        Bank bank1 = new SBI();
        Bank bank2 = new ICICI();

        System.out.println("SBI Interest Rate: " + bank1.getInterestRate() + "%");
        System.out.println("ICICI Interest Rate: " + bank2.getInterestRate() + "%");
    }
}
