import java.util.*;
class Palindrome {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int i,j,flag=0;
        System.out.println("Enter a string");
        String str=sc.next();
        i=0;
        j=str.length()-1;
        while(i<j)
        {
            if (str.charAt(i) != str.charAt(j))
            { flag=1;
                break;
            }
            i++;
                j--;
            }
        
        
        if(flag==1)
        System.out.println("not Palindrome");
        else if(flag==0)
        System.out.println("Palindrome");
    }
    
}
