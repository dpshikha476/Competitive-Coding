import java.util.*;
 
class TestClass 
{
    public static void main(String args[] ) throws Exception 
{
       
        Scanner s = new Scanner(System.in);
        String n = s.nextLine(); 
 
       int a=Integer.parseInt(String.valueOf(n.charAt(0)));
       int b=Integer.parseInt(String.valueOf(n.charAt(1)));
       int c=Integer.parseInt(String.valueOf(n.charAt(3)));
       int d=Integer.parseInt(String.valueOf(n.charAt(4)));
       int e=Integer.parseInt(String.valueOf(n.charAt(5)));
       int f=Integer.parseInt(String.valueOf(n.charAt(7)));
       int g=Integer.parseInt(String.valueOf(n.charAt(8)));
       if((a+b)%2==0 && (c+d)%2==0 && (d+e)%2==0 && (f+g)%2==0 )
       {
           if(n.charAt(2)!='A' && n.charAt(2)!='E' && n.charAt(2)!='I' &&                   n.charAt(2)!='O' && n.charAt(2)!='U' && n.charAt(2)!='Y')
            System.out.println("valid"); 
            else
        System.out.println("invalid");
       }
        else
        System.out.println("invalid");    
 
      
    }
}