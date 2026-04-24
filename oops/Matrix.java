import java.util.Scanner;

class MatrixMath {

    int[][] matrix;
    int rows, cols;

    // Take matrix input
    void inputMatrix(Scanner sc) {
        System.out.print("Enter rows: ");
        rows = sc.nextInt();
        System.out.print("Enter columns: ");
        cols = sc.nextInt();

        matrix = new int[rows][cols];

        System.out.println("Enter matrix elements:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
    }

    // Scalar addition
    int[][] addScalar(int scalar) {
        int[][] result = new int[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = matrix[i][j] + scalar;
            }
        }
        return result;
    }

    // Matrix addition
    int[][] addMatrix(MatrixMath other) {

        if (rows != other.rows || cols != other.cols) {
            System.out.println("Matrix size mismatch!");
            return null;
        }

        int[][] result = new int[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }

    // Display matrix
    void printMatrix(int[][] mat) {
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[0].length; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
    }
}

public class Matrix {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        MatrixMath m1 = new MatrixMath();
        MatrixMath m2 = new MatrixMath();

        System.out.println("First Matrix:");
        m1.inputMatrix(sc);

        System.out.println("Second Matrix:");
        m2.inputMatrix(sc);

        System.out.print("Enter scalar value: ");
        int scalar = sc.nextInt();

        // Scalar addition
        int[][] scalarResult = m1.addScalar(scalar);
        System.out.println("Scalar Addition Result:");
        m1.printMatrix(scalarResult);

        // Matrix addition
        int[][] matrixResult = m1.addMatrix(m2);
        if (matrixResult != null) {
            System.out.println("Matrix Addition Result:");
            m1.printMatrix(matrixResult);
        }
    }
}
