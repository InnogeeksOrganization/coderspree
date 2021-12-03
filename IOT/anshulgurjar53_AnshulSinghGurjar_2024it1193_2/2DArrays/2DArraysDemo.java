import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc=new Scanner(System.in);
    int rows=sc.nextInt();
    int col=sc.nextInt();
    int a[][]=new int[rows][col];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        a[i][j]=sc.nextInt();
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++){
        System.out.print(a[i][j]+" ");
        }
        System.out.println();
    }

 }

}