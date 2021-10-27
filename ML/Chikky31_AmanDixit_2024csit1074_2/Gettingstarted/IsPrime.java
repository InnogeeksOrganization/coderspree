import java.io.*;
  
  public class Main{
  
  public static void main(String[] args)throws IOException {
   BufferedReader ab=new BufferedReader (new InputStreamReader(System.in));
  
      int t,n,i,j,c=0;
      t=Integer.parseInt(ab.readLine());
     
    for(j=1;j<=t;j++)
    {  c=0;
           n=Integer.parseInt(ab.readLine());
          for(i=2;i*i<=n;i++)
          {
              if(n%i==0)
              {
                c++;
                break;
                
              }
          }
              
      
               if(c==0)
              {
                     System.out.println("prime");
              }
              else
              {
                     System.out.println("not prime");
              }
  
   }}
  }
