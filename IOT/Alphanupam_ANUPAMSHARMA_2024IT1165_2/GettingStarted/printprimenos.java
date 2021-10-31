import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int t;
 t=scn.nextInt();
  while (t!=0)
{
    int n,i,c=0;
    n=scn.nextInt();
    for(i=2;i<=(n/2)+1;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    System.out.println("prime");
    else
System.out.println("not prime");
   t--;
    
}
}  }