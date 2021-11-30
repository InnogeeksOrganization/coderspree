import java.io.*;
import java.util.*;

public class Main{
  /*public static void display(int[] a){
    StringBuilder sb = new StringBuilder();

    for(int val: a){
      sb.append(val + " ");
    }
    System.out.println(sb);
  }*/

  public static void reverse(int[] a){
    for(int i=a.length-1;i>=0;i--)
    System.out.print(a[i]+" ");
  }

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }

    reverse(a);
    //display(a);
 }

}