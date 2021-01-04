import java.util.*;

class TestClass
{
    public static void main(String args[] ) throws Exception 
    {
       
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();   
        int k = s.nextInt();  
        for(int i=0;i<n;i++)
        {
            int a = s.nextInt();
            if(a>=k)
            System.out.println("YES"); 
            else
            System.out.println("NO"); 
        }               
    }
}
