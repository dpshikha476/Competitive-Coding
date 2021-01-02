import java.util.*;

class TestClass 
{
    public static void main(String args[] ) throws Exception {
        
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();    
        for(int i=1;n>0;i++)
        {
            n=n-i;
            if(n<=0)
            { 
                System.out.println("Patlu");
                break;
            }
             n=n-(2*i);
              if(n<=0)
             {
                 System.out.println("Motu");
                 break;
             }
        }

       
    }
}
