/*
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.
*/

import java.util.Scanner;

public class PalindromeNumber{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        if(isPalindrome(x)) {
            System.out.println("It is Palindrome Number");
        } else {
            System.out.println("It is not Palindrome Number");
        }
    }

    static boolean isPalindrome(int x) {
        if (x < 0 ) {
            return false;
        }
        int revDigit = 0;
        int temp = x;
        while (temp != 0) {
            int r = temp % 10;
            revDigit = revDigit*10  + r;
            temp = temp / 10;
        }
        if (x == revDigit) return true;
        return false;
    }
}