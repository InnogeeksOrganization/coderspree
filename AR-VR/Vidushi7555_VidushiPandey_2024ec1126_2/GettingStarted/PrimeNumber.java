/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int t=scn.nextInt();
      
      for(int i=1;i<=t;i++)
      {
          int n=scn.nextInt();
          
          int count=0;
          
          for(int j=2;j*j<=n;j++)
          {
              if(n%j==0)
              {
                  count++;
                  break;
              }
          }
          if(count==0)
          {
              System.out.println("prime");
          }
          else
          {
              System.out.println("not prime");
          }
          
      }
   }
  }