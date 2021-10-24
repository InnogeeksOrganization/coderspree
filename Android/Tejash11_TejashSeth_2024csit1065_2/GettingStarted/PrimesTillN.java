import java.util.*;
public class Main
{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int low, high, j;
    low = sc.nextInt();
    high = sc.nextInt();

    for (int i = low; i <= high; i++)
    {
      int count = 0;
      for (j = 2; j <= i / 2; j++)
      {
        if (i % j == 0)
          count++;
      }
      if (count == 0)
        System.out.println(i);
    }
  }
}