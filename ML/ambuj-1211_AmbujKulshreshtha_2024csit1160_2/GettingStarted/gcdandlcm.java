import java.util.*;
public class gcdandlcm {
    public static void main(String[] args){
    int num1,num2,gcd=0,lcm=0;
    Scanner sc=new Scanner(System.in);
    num1=sc.nextInt();
    num2=sc.nextInt();
    if(num1<num2){
    for(int i=1;i<=num1/2;i++){
        if(num1%i==0&&num2%i==0)
        gcd=i;
    }
    }else
    if(num2<num1){
        for(int i=1;i<=num2/2;i++){
            if(num1%i==0&&num2%i==0)
             gcd=i;
        }
    }
    lcm=(num1*num2)/gcd;
    System.out.println(gcd);
    System.out.println(lcm);
    sc.close();
}}
