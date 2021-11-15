import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int sourceBase = scn.nextInt();
    int  destBase = scn.nextInt();
    int value = getValue(n, sourceBase, destBase);
    System.out.println(value);
  }

  public static int getValue(int n, int src, int dest)
  {
    int decimalValue = anyBaseToDecimal(n, src);
    int finalBaseValue = decimalToAnyBase(decimalValue, dest);
    return finalBaseValue;
  }

  public static int anyBaseToDecimal(int n, int b)
  {
    int sum = 0, i = 0;
    while (n > 0)
    {
      sum += (n % 10) * Math.pow(b, i);
      i++;
      n = n / 10;
    }
    return sum;
  }

 
  public static int decimalToAnyBase(int n, int b)
  {
    int temp = 0;
    int r = 1;
    while (n > 0)
    {
      temp = temp + (n % b) * r;
      r *= 10;
      n = n / b;
    }
    return temp;
  }
}