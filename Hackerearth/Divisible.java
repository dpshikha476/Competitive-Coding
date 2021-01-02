import java.util.*;

class TestClass 
{
    public static void main(String args[] ) throws Exception {
       
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();

        int[] a = new int[n];
        for(int i=0;i<n;i++)
        a[i]=s.nextInt();

        int d=0,i,b;
        
        for(i=0;i<n/2;i++)
        {
            b=a[i];
            while(b>=10)
            {
                b=b/10;
            }

            if(i%2==0)
            d=d+b;
            else
            d=d-b;
        }

        for(i=n/2;i<n;i++)
        {
            b=a[i];
            b=b%10;

            if(i%2==0)
            d=d+b;
            else
            d=d-b;
        }



        if(d%11==0)
        System.out.println("OUI");
        else
        System.out.println("NON");    

        

    }
}
