import java.util.*;
public class Second_largest_array {
    public static void main(String args[])
    {
        try (Scanner sc = new Scanner(System.in)) {
            int num[];
            int n,i,large,index=0,sec_large=0;
            System.out.println("Enter the size of array ");
            n=sc.nextInt();
            num=new int[n];
            System.out.println("Enter the elements\n");
            for(i=0;i<n;i++)
            {
                num[i]=sc.nextInt();
            }
            large=num[0];
            for(i=0;i<n;i++)
            if(num[i]>large)
            {
                large=num[i];
                index=i;
            }
            for(i=0;i<n;i++)
            if(num[i]!=num[index])
               if(num[i]>num[sec_large])
               {
                num[sec_large]=num[i];
                sec_large=i;
               }
   System.out.println("Second Largest number in the given array is "+num[sec_large]);
        }
    }
}
