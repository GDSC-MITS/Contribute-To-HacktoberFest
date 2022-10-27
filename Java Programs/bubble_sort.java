import java.util.Scanner;

public class bubble_sort {
    public static void main(String[] args) {
        int n, i, j, temp;
        int a[] = new int[10];
        System.out.println("Enter the size of your array: ");
        try (Scanner scan = new Scanner(System.in)) {
            n = scan.nextInt();
            System.out.println("Enter the elements of the array: ");
            for (i = 0; i < n; i++) {
                a[i] = scan.nextInt();
            }
        }
        System.out.println("Sorting the array:-\n...................");
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        System.out.println("The sorted array is: \n");
        for (i = 0; i < n; i++) {
            System.out.print(a[i] + "\t");
        }
    }
}