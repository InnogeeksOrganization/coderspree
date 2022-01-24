import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner in =new Scanner(System.in);
    int n=in.nextInt();
    int m=in.nextInt();
    int [][]a=new int [n][m];
    for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < m; j++)
        a[i][j]=in.nextInt();
    }
    
 
/*for(int i=0;i<a.length;i++)
{
    for(int j = 0; j < a[i].length; j++)
System.out.print(a[i][j]+" ");

System.out.println();
}*/
for(int i = 0; i < n; i++)
    {
    for(int j = 0; j< m; j++)
System.out.print(a[i][j] +" ");

System.out.println();
}
}
}
