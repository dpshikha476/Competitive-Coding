import java.util.*;

class TestClass 
{
    public static void main(String args[] ) throws Exception 
    {
        
        Scanner s = new Scanner(System.in);
        int n = s.nextInt(); 
        int steps;
        if(n%5==0)
            steps=n/5;
        else
            steps=n/5 +1; 
        System.out.println(steps);    
      

    }
}
