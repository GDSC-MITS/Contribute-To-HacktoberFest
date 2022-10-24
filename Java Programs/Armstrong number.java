/*Lets first understand what is Armstrong number
   Armstrong numbers are those numbers when we do cube of every digit of the give input number(Ex 153) and then we sum up all the cubes of digits if it is equal to the 
   given input number then it is called as Armstrong number(153)
   
   Go through examples here
   153: 1^3 + 5^3 + 3^3 = 1 + 125+ 27 = 153
   125: 1^3 + 2^3 + 5^3 = 1 + 8 + 125 = 134 (Not an Armstrong Number)
   1634: 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1643*/
  
 // Here we begin
import java.util.Scanner;  
import java.lang.Math;  
public class ArmstsrongNumberExample2  
{  
//function to check if the number is Armstrong or not  
     static boolean isArmstrong(int n)   
    {   
       int temp, digits=0, last=0, sum=0;   
       //assigning n into a temp variable  
       temp=n;   
       //loop execute until the condition becomes false  
       while(temp>0)    
      {   
         temp = temp/10;   
         digits++;   
      }   
      temp = n;   
     while(temp>0)   
    {   
        //determines the last digit from the number      
        last = temp % 10;   
       //calculates the power of a number up to digit times and add the resultant to the sum variable  
        sum +=  (Math.pow(last, digits));   
       //removes the last digit   
         temp = temp/10;   
     }  
     //compares the sum with n  
    if(n==sum)   
     //returns if sum and n are equal  
     return true;      
     //returns false if sum and n are not equal  
     else return false;   
    }   

// main function
 public static void  main(String args[])     
 {     
   int num;   
   Scanner sc= new Scanner(System.in);  
   System.out.print("Enter the number: ");  
   //reads the limit from the user  
    num=sc.nextInt();  
   if(isArmstrong(num))  
   {  
    System.out.print("Armstrong ");  
   }  
   else   
   {  
     System.out.print("Not Armstrong ");  
   }  
  }   
}  

I hope you enjoyed this
Thank you : )
