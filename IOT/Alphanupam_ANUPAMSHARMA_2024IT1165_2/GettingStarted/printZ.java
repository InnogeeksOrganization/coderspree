import java.util.*;

public class Main
{
    public static void main(String[] args)
    {
int i,j;
for (i=0;i<5;i++)
{
for (j=0;j<5;j++)
{
    if((i==0)||(i==4)||(j==4-i)
    System.out.print("*");
    else
    System.out.print("  ");
}
System.out.println();
}
}
}