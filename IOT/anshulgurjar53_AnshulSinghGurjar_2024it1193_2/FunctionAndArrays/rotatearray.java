import java.io.*;
import java.util.*;

public class Main{
  public static void rotate(int[] a, int k){
    // write your code here
    k=k%a.length;
    if(k>0){
    for(int i=k-1;i<a.length;i++)
    System.out.print(a[i]+" ");
    for(int i=0;i<k-1;i++)
    System.out.print(a[i]+" ");
    }
    if(k<0){
      k=k*-1;
      for(int i=k;i<a.length;i++)
      System.out.print(a[i]+" ");
      for(int i=0;i<k;i++)
      System.out.print(a[i]+" ");
    }
    if(k==0){
      for(int i=0;i<a.length;i++)
      System.out.println(a[i]+" ");
    }
  }

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }
    int k = Integer.parseInt(br.readLine());

    rotate(a, k);
    
 }

}