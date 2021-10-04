
import java.util.*;
public class Grade {
    public static void main(String[] args) {
        // input - don't change this code
        Scanner scn = new Scanner(System.in);
        int marks = scn.nextInt();
        if(marks>90)
        {
            System.out.println("excellent");
        }
        if(marks>80 && marks<=90)
        {
            System.out.println("good");
        }
        if(marks>70 && marks<=80)
        {
            System.out.println("fair");
        }
        if(marks>60 && marks<=70)
        {
            System.out.println("meets expectations");
        }
        if(marks<=60)
        {
            System.out.println("below par");
        }
}
}
