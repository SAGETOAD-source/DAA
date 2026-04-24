import java.util.Scanner;

// Base class
class Person {
    String name;
    int age;

    // Constructor
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Method to display person details
    void displayPerson() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

// Derived class (Employee) - single inheritance
class Employee extends Person {
    int employeeId;
    double salary;

    // Constructor
    Employee(String name, int age, int employeeId, double salary) {
        super(name, age); // call base class constructor
        this.employeeId = employeeId;
        this.salary = salary;
    }

    // Method to display employee details
    void displayEmployee() {
        displayPerson(); // display base class info
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Salary: " + salary);
    }
}

// Main class
public class Employee_inheritance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input person details
        System.out.print("Enter name: ");
        String name = sc.nextLine();

        System.out.print("Enter age: ");
        int age = sc.nextInt();

        System.out.print("Enter employee ID: ");
        int empId = sc.nextInt();

        System.out.print("Enter salary: ");
        double salary = sc.nextDouble();

        // Create employee object
        Employee emp = new Employee(name, age, empId, salary);

        // Display employee info
        System.out.println("\n--- Employee Details ---");
        emp.displayEmployee();
    }
}
