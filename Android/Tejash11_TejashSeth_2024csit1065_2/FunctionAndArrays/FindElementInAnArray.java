import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt(); 
    } 
    int d = sc.nextInt(); 
    int num=-1;
    for(int i=0;i<a.length;i++) 
    {
        if(a[i]==d) 
        { 
            num = i; 
            break;
        }
    }
    System.out.println(num);
    }
 }