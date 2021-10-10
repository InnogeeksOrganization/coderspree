    import java.util.*;
    public class Main{
    
    public static void main(String[] args) {
      Scanner sc= new Scanner (System.in);
      int num,a,d=0;
      num=sc.nextInt();
      int n=num;
      while(num!=0)
    {  num/=10;
       d++;
    }
    int l ; 
      
       a=(int)(Math.pow(10,d-1));
    while(a!=0)
    {
        l=n/a;
         System.out.println(l);
          n=n%a;
          a=a/10;
    }
       
      }
     }
    