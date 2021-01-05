
import java.util.*;

class TestClass 
{
    public static void main(String args[] ) throws Exception 
    {
       
        Scanner s = new Scanner(System.in);
        while(s.hasNextLine())
        {
        int n = s.nextInt();   
        if(n==42)
        break;
        else
        System.out.println(n);    
        }
     
    }
}
