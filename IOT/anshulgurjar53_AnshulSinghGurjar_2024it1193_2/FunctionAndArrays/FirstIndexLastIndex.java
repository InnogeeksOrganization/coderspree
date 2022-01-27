import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc= new Scanner(System.in);
    int n= sc.nextInt();
    int a[]=new int[n];
    for(int i=0;i<n;i++)
    a[i]=sc.nextInt();
    int d= sc.nextInt();
    int i,l=0,u=n-1,mid=(l+u)/2;
    for( i=0;i<n;i++)
    {
        if(a[mid]==d)
        {
            int m=mid;
            int m1=mid;
            while(a[m]==d)
                --m;
            System.out.println(m+1);
            while(a[m1]==d)
                ++m1;
            System.out.println(m1-1);break;       

        }
        else if(a[mid]>d)
        {
            u=mid-1;
            mid=(l+u)/2;
        }
        else if(a[mid]<d)
        {
            l=mid+1;
            mid=(l+u)/2;
        }
        else{
            System.out.println("-1");
            System.out.println("-1");
        }
    }
    if(i==n){
        System.out.println("-1");
            System.out.println("-1");
    }


 }

}