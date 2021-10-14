import java.util.*;
public class Main

{public static void main(String args[])
{Scanner scn =new Scanner(System.in);
int low ,high,i,j ,flag;
low=scn.nextInt();
high=scn.nextInt();
 for (i = low; i <= high; i++)
       {

            if (i == 1 || i == 0)
                continue;

            flag = 1;
 
            for (j = 2; j <= i / 2; ++j)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
                System.out.println(i);
        }
    }
}