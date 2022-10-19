/*Here basically in this question
We will be given String and we have to Reverse the String Wordwise
Example 
Input : Welcome to Hacktoberfest
Output: Hacktoberfest to Welcome
*/
This is the snippet for the function
public static String reverseWordWise(String str) {
		// This code is basically 3 pointer appr
       int n = str.length();
     String rev="";
     int i,j=0,k=0;
     for(i=n-1;i>=0;i--)
     {
    	rev = rev+str.charAt(i); 
     }
     String ans="";
     for(i=0;i<n;i++)
     {
    	 if(rev.charAt(i)==' ')
    	 {
    		 j=i-1;
    		 for(int m=j;m>=k;m--)
    		 {
    			 ans+=rev.charAt(m);
    		 }
    		 ans+=rev.charAt(i);
    		 k=i+1;
    	 }
     }
     j=i-1;
	 for(int m=j;m>=k;m--)
	 {
		 ans+=rev.charAt(m);
	 }
     return ans;   
	}
  
  Hope you enjoyed
  Thank you!!
