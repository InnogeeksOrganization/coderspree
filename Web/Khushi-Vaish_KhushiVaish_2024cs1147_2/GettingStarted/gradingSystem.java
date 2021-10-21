import java.util.*;
public class Main{
  
  public static void main(String[] args) {
      Scanner scn=new Scanner
      (System.in);
      int marks = scn.nextInt();
      if(marks>90)
      {
          System.out.print("excellent");
      }
      else if(marks<=90 && marks>80)
      {
          System.out.print("good");
      }
      else if(marks<=80 && marks>70)
      {
          System.out.print("fair");
      }
      else if(marks<=70 && marks>60)
      {
          System.out.print("meets expectations");
      }
      else if(marks<=60)
      {
         System.out.println("below par");
      }
      }
  }

  
   