import java.io.*;
import java.util.*;

public class Main{
  public static void display(int[] a){
    StringBuilder sb = new StringBuilder();

    for(int val: a){
      sb.append(val + "\n");
    }
    System.out.println(sb);
  }

  public static int[] inverse(int[] a)
  {
    // write your code here
    int i,j;
    int a1[]=new int[a.length];
    for(i=0;i<a.length;i++)
    {
        for(j=0;j<a.length;j++)
        {
            if(a[j]==i)
            break;
        }
        a1[i]=j;
    }
    

    return a1;
  }

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }

    int[] inv = inverse(a);
    display(inv);
 }

}