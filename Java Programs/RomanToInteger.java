/*
The program converts the Roman number in to Intger.
Input: s = "LVIII"
Output: 58
*/

import java.util.Scanner;

class RomanToInteger {
    public static main void(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int len = s.length();
        int ans = 0;
        for (int i = 0; i < len; i++) {
            char ch = s.charAt(i);
            int cur = getValue(ch);
            if (i < len - 1 && cur < getValue(s.charAt(i + 1))) {
                ans -= cur;
            } else {
                ans += cur;
            }
        }
        System.out.println("Result: " + ans);
    }

    private int getValue(char ch) {
        int ans = 0;
        switch (ch) {
            case 'I':
                ans = 1;
                break;

            case 'V':
                ans = 5;
                break;

            case 'X':
                ans = 10;
                break;

            case 'L':
                ans = 50;
                break;

            case 'C':
                ans = 100;
                break;

            case 'D':
                ans = 500;
                break;

            case 'M':
                ans = 1000;
                break;

            default:
                break;
        }

        return ans;
    }
}