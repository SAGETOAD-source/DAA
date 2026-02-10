import java.util.Scanner;

public class GradeCheck {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter marks (0–100): ");
        int marks = sc.nextInt();

        int grade = marks / 10;   
            case 10:
            case 9:
                System.out.println("Grade: A");         
                break;

            case 8:
                System.out.println("Grade: B");
                break
;
            case 7:
                System.out.println("Grade: C");
                break;

            case 6:
                System.out.println("Grade: D");
                break;

            case 5:
                System.out.println("Grade: E");
                break;

            default:
                if (marks >= 0 && marks < 50)
                    System.out.println("Grade: F (Fail)");
                else
                    System.out.println("Invalid Marks");
        }

        sc.close();
    }
}
