import java.util.*;
class Armstrong
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,temp,sum=0,r;
        System.out.println("Enter a three digit number: ");
        n=sc.nextInt();
        temp=n;
        while(n!=0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(sum==temp)
        System.out.println("\nArmstrong");
        else
        System.out.println("\nNot Armstrong");
    }
}