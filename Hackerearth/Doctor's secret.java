import java.util.*;

class TestClass
{
    public static void main(String args[] ) throws Exception 
    {
       
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();   
        int k = s.nextInt();  
        if(n<=23 && (k>=500 && k<=1000))
            System.out.println("Take Medicine"); 
        else
            System.out.println("Don't take Medicine");                    
    }
}