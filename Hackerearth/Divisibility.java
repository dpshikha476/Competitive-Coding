import java.util.*;

class TestClass 
{
    public static void main(String args[] ) throws Exception 
    {

        Scanner s = new Scanner(System.in);
        int N = 0;
        N = s.nextInt();
        int[] data = new int[N];
        for(int i=0; i<N; i++)
        {
            data[i] = s.nextInt();   
        }
        int d=data[N-1]%10;
        if(d==0) 
        System.out.println("Yes");
        else
        System.out.println("No");
        
    }
}