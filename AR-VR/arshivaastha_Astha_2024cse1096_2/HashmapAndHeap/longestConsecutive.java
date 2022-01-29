import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
     Scanner in = new Scanner (System.in);
    int n=in.nextInt();
    int [] a=new int[n];
    for(int i=0;i<a.length;i++)
    a[i]=in.nextInt();
    
    HashMap<Integer,Boolean>fmap = new HashMap<>();
    for(int val:a)
    {
        fmap.put(val,true);
    }
   
      for(int val:a)
    {
        if(fmap.containsKey(val-1))
        fmap.put(val,false);
        
    }
    
    int ms=0;  //max start point
    int ml=0;   //max length
    for(int val:a)
    {
        if(fmap.get(val)==true)
        {int l=1;
        int tsp=val;
        while(fmap.containsKey(tsp+l))
        {
            l++;
        }
        if(l>ml)
        {
            ms=tsp;
            ml=l;
        }
            
        }
    }
    
    for(int i=0;i<ml;i++)
    System.out.println(ms+i);
 }

}