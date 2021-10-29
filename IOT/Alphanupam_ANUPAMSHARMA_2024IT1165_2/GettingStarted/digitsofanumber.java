import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
int n = scn.nextInt();
int c=0,d,r=0,n1=n;  
  while(n!=0)
  {
      d=n%10;
   r=r*10+d;
     n=n/10;
  } 
    while(r!=0)
  {
      d=r%10;
    System.out.println(d);
     r=r/10;
  } 
 }
 }