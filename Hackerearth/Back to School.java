import java.util.*;

class TestClass 
{
    public static void main(String args[] ) throws Exception 
    {
        
        Scanner s = new Scanner(System.in);
        int a = s.nextInt(); 
        int b = s.nextInt(); 
        int c = s.nextInt();  
        int m= Math.max(a, Math.max(b,c));
        System.out.println(m);    

    }
}
