import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
    // write your code here
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int a[]=new int[n];int i,j;
    for(i=0;i<n;i++)
    a[i]=0;
    for(i=1;i<n;i++)
    {
        for(j=i;j<n;j+=i)
        {
            if(j%i==0)
            {
                if(a[j-1]==0)
                a[j-1]=1;
                else
                a[j-1]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        System.out.println(i+1);
    }
   }
  }