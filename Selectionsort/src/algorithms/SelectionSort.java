package algorithms;

import java.util.Arrays;
import java.util.Scanner;

public class SelectionSort {
    
    void selectionSort(int array[]) {
        int size = array.length;

        for (int step = 0; step < size - 1; step++) {
            int min_idx = step;

            for (int i = step + 1; i < size; i++) {
                if (array[i] < array[min_idx]) {
                    min_idx = i;
                }
            }

            // Swap the found minimum element with the first element
            int temp = array[step];
            array[step] = array[min_idx];
            array[min_idx] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements in the array: ");
        int size = scanner.nextInt();

        int[] data = new int[size];
        System.out.println("Enter " + size + " integer elements:");

        for (int i = 0; i < size; i++) {
            data[i] = scanner.nextInt();
        }

        SelectionSort ss = new SelectionSort();
        ss.selectionSort(data);

        System.out.println("Sorted Array in Ascending Order:");
        System.out.println(Arrays.toString(data));

        scanner.close();
    }
}
