

public class printz {

    public static void main(String[] args) {
        int i,j;
        for( i=1;i<=5;i++){
            for( j=1;j<=5;j++){
                if(i==1||i==5)
                System.out.print("*");
                else if(i==6-j){
                    System.out.print("*");
                }
                else 
                 System.out.print(" ");
            }
            System.out.println();
        }

    }
}