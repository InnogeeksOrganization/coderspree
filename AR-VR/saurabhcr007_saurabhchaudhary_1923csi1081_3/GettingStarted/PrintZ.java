public class PrintZ {
    public static void main(String[] args) {
        int n=5;
        int m=n-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    System.out.print("*");
                }
                else if(i==(n-1)){
                    System.out.print("*");
                }
                else if((i+j)==m){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println(" ");
        }

    }
}

