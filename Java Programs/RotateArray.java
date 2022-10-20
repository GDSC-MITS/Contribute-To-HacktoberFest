/*
Rotate the array to the right by k steps, where k is non-negative.
The solution takes O(1) Space Complexity and O(n) Time Complexity

Constraints:
    Given array -> nums
    Nunmber of steps of to ratated -> k

Algorithm:
    Create an another array and storing the value at the rotated index using logic, NewIndex = (i + steps) % GivenArrayLength, where i is index of given 
    array
 */

public class PascalTriangle {
    public static void main(String args[]) {
        int[] nums = new int[] {1,2,3,4,5,6,7};
        int k = 3;
        if (nums == null || nums.length == 0) {
            return;
        }

        int[] arr = new int[nums.length];
        for (int i = 0; i < nums.length; ++i) {
            arr[(i+k) % nums.length] = nums[i];
        }

        for (int i = 0; i < nums.length; ++i) {
            nums[i] = arr[i];
        }
    }
}
