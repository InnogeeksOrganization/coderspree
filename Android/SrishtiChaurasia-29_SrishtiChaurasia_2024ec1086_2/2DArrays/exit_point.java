import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int n,m,i,j,d;
    n=sc.nextInt();
    m=sc.nextInt();
    int arr[][]=new int[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            arr[i][j]=sc.nextInt();
        }
    }
    i = 0;
    j = 0;
    d = 0;   
    while (true) {
      d=(d+arr[i][j])%4;
      if (d==0) {
        j++;  
      } else if (d==1) {
        i++;  
      } else if (d==2) {
        j--; 
      } else if (d==3) {
        i--;  
      }

      if (i<0) {
        i++;  
        break;
      } else if (j<0) {
        j++;   
        break;
      } else if (i==n) {
        i--;  
        break;
      } else if (j==m) {
        j--;  
        break;
      }
    }

    System.out.println(i);
    System.out.println(j);
    
    }

}