import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
     Scanner in =new Scanner(System.in);
     int row1=in.nextInt();
     int col1=in.nextInt();
     int [][]a=new int [row1][col1];
   
    for(int i = 0; i < row1; i++)
    {
    for(int j = 0; j < col1; j++)
        a[i][j]=in.nextInt();
    }
    
    int row=in.nextInt();
    int col=in.nextInt();
    
    int [][]b=new int [row][col];
    for(int i = 0; i < row; i++)
    {
    for(int j = 0; j < col; j++)
        b[i][j]=in.nextInt();
    }
    
    if(col1!=row)  
    {System.out.println("Invalid input");
    return;}
      
      int[][]prd=new int [row1][col];
      for(int i = 0; i < row1; i++)
          {
              for(int j = 0; j< col; j++)
              {
                  for(int k = 0; k < col1; k++)
              
                  prd[i][j]+=a[i][k]*b[k][j];
              }
          }
          for(int i = 0; i < row1; i++)
          {
              for(int j = 0; j< col; j++)
              {
                 System.out.print(prd[i][j] +" ");
}
System.out.println();
              
          }
 }

}