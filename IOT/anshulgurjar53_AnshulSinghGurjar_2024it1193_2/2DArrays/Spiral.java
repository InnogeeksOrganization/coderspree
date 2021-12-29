import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int a[][]=new int[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                a[i][j]=sc.nextInt();

        }
        int i=0,j,k=0,c=0,c1=0,t=n*m;
        while(c1<t)
        {
            if(c%4==0)
            {
                for(j=i;j<n&&c1<t;j++){
                    System.out.println(a[j][i]);c1++;}
                ++c;--j;

                for(k=i+1;k<m&&c1<t;k++){
                    System.out.println(a[j][k]);c1++;}
                ++c;--k;        
            }
            else
            {
                
                for(j=n-1-1;j>=i&&c1<t;j--){
                    System.out.println(a[j][k]);c1++;}
                ++c;++j;--n;--m;i++;

                for(k=m-1;k>=i&&c1<t;k--){
                    System.out.println(a[j][k]);c1++;}
                ++c;        
            }
        }
    }

}