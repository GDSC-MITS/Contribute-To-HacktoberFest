//This is the program to find the factors of the given number

import java.util.ArrayList;

public class factors {
    public static void main(String[] args) {
        int num = 20;
        factors1(num);
        System.out.println();
        factors2(num);
    }

    //Unsorted 
    static void factors1(int n){
        for(int i = 1; i <= Math.sqrt(n); i++){
            if(n%i == 0){
                if(n/i == i){
                    System.out.print(i + " ");
                }else{
                    System.out.print(i + " " + n/i + " ");
                }
            }
        }
    }

    //Sorted - here the time and space complexity will be sqrt(n)
    static void factors2(int n){
        ArrayList<Integer> list = new ArrayList<>();
        for(int i = 1; i <= Math.sqrt(n); i++){
            if(n%i == 0){
                if(n/i == i){
                    System.out.print(i + " ");
                }else{
                    System.out.print(i + " ");
                    list.add(n/i);
                }
            }
        }
        for(int i = list.size() - 1; i >= 0; i--){
            System.out.print(list.get(i) + " " );
        }
    }
}
