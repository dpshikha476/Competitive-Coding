
import java.util.*;


class TestClass {
    public static void main(String args[] ) throws Exception {
       
        Scanner s = new Scanner(System.in);
        int t = s.nextInt(); 
        int a=0,b=7;
        for(int i=0;i<t;i++)
        {
            int n = s.nextInt();  
            if(n-a <= b-n)
            {
               a=n; 
            System.out.println('A');
            }  
            else
            {
                b=n;
            System.out.println('B');
            }
        }
       
    }
}
