import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      // input - don''t change this code
      Scanner scn = new Scanner(System.in);
      int marks = scn.nextInt();
      // input - don''t change this code
      if(marks>90)
      System.out.println("excellent");
      if(marks>80&&marks<=90)
      System.out.println("good");
    if(marks>70&&marks<=80)
      System.out.println("fair");
    if(marks>60&&marks<=70)
      System.out.println("meets expectation");
      }
  }