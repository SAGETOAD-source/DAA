class Comparator {

    void largest(int arr[]) {
        int largest = arr[0];

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        System.out.println("Largest element: " + largest);
    }

    void smallest(int arr[]) {
        int smallest = arr[0];

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }

        System.out.println("Smallest element: " + smallest);
    }
}

public class LargestSmallest {
    public static void main(String[] args) {

        int[] arr = {45, 12, 78, 34, 9, 56};

        Comparator obj = new Comparator();
        obj.largest(arr);
        obj.smallest(arr);
    }
}
