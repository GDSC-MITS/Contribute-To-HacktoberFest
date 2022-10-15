import java.util.Scanner; 
class PatternTriangle
{ 
    static
    {
        System.out.println("Pattern program for a triangle made with *"); 
    } 
    
    public static void main(String args[]) 
    { 
        int i,j,k; 
        char patterntri[][]=new char[5][]; 
        for(i=0;i<5;i++) 
        { 
            patterntri[i]=new char[i+1]; 
        } 
        
        for(i=0;i<5;i++) 
        { 
            for(j=0;j<=i;j++) 
            { 
                if(i==4||i==j||j==0) 
                patterntri[i][j]='*'; 
                else 
                patterntri[i][j]=' '; 
            } 
            
        } 
        for(i=0;i<5;i++) 
        { 
            for(j=0;j<=i;j++) 
            { 
                System.out.print(patterntri[i][j]); 
            }
        System.out.println(); 
            
        } 
        
    } 
    
} 
