import java.util.*;

class TestClass 
{
    public static void main(String args[] ) throws Exception 
    {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();

        for(int i=0; i<n; i++)
        {

            String s1=sc.next();
            String s2=sc.next();

            char a[]= s1.toCharArray();
            char b[]= s2.toCharArray();

            Arrays.sort(a);
            Arrays.sort(b);

            boolean t= Arrays.equals(a,b);

            if(t)
                System.out.println("YES");
            else
                System.out.println("NO");

        }

    }

}