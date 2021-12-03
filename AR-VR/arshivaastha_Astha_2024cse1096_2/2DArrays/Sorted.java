import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
               Scanner in =new Scanner(System.in);
     int n=in.nextInt();
     
     int [][]a=new int [n][n];
   
    for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
        a[i][j]=in.nextInt();
    }
    
    int x= in.nextInt();
    
    int i=0;
    int j=n-1;
    
    while(i<n && j>=0)
    {
        if(x==a[i][j])
        {
            System.out.println(i);
            System.out.println(j);
        return;
        }
        else if(x<a[i][j])
        j--;
        else
        i++;
         }
 System.out.println("Not Found");
               
    }

}