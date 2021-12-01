import java.io.*;
import java.util.*;

public class Main {

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
    
    
    int minc=0;
    int minr=0;
    int maxr=a.length-1;
    int maxc=a[0].length-1;
    int tne=n*m;
    int cnt =0;
    
    while(cnt<tne)
    {
       //left wall 
        for(int i=minr, j=minc;i<=maxr && cnt<tne;i++)
        {
            System.out.println(a[i][j]);
            cnt++;
        }minc++;
        
         //bottom wall 
        for(int i=maxr, j=minc;j<=maxc && cnt<tne;j++)
        {
            System.out.println(a[i][j]);
            cnt++;
        }maxr--;
        
         //right wall 
        for(int i=maxr, j=maxc;i>=minr  && cnt<tne;i--)
        {
            System.out.println(a[i][j]);
            cnt++;
        }maxc--;
        
         //top wall 
        for(int i=minr, j=maxc;j>=minc && cnt<tne;j--)
        {
            System.out.println(a[i][j]);
            cnt++;
        }minr++;
        
        
        
        
        
    }
    }
    
    }



