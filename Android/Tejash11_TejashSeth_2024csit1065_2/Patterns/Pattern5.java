import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int space = n / 2 + 1, star = 1;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j < space; j++)
      {
        System.out.print("\t");
      }
      for (int j = 1; j <= star; j++)
      {
        System.out.print("*\t"); 
      }
      for (int j = 1; j <= space; j++)
      {
        System.out.print("\t");  
      }

      if (i <= n / 2)
      {
        star += 2;
        space--;
      }
      else
      {
        space++;
        star -= 2;
      }
      System.out.println();
    }
  }
}