import java.util.*;
class Main
{
    public static void main(String args[])
    {
         Scanner sc= new Scanner (System.in);
         int n1,m1,n2,m2,i,k,j;
         n1=sc.nextInt();
         m1=sc.nextInt();
         
         int a[][]=new int[n1][m1];
         for(i=0;i<n1;i++)
         {
             for(j=0;j<m1;j++)
             {
                 a[i][j]=sc.nextInt();
             }
         }
         n2=sc.nextInt();
         m2=sc.nextInt();
         int b[][]=new int[n2][m2];
         
          for(i=0;i<n2;i++)
         {
             for(j=0;j<m2;j++)
             {
                 b[i][j]=sc.nextInt();
             }
         }
         int mul[][]=new int[n1][m2];
        
         if(m1!=n2)
         {
             System.out.println("Invalid input");
             return;
         }
         
           for(i=0;i< n1;i++)
       {
            for(j=0;j< m2;j++)
        {
             mul[i][j] = 0;
            for(k=0;k<m1;k++)
            {
                 mul[i][j] = mul[i][j] + a[i][k]*b[k][j];
            }
        }
      }
      for(i=0;i<n1;i++)
      {
          for(j=0;j<m2;j++)
          {
              System.out.print(mul[i][j]+" ");
              
          }
          System.out.println();
      }
      
         }
}