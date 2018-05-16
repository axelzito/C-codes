import java.math.BigInteger;
import java.util.Scanner;

public class fibonacci {
	
	public static void main(String args[]){
		Scanner s = new Scanner(System.in);
		
		while(s.hasNext()){
			int num;
			num = s.nextInt();
			
			BigInteger n1 = BigInteger.ZERO;
			BigInteger n2 = BigInteger.ONE;
			BigInteger aux = BigInteger.ZERO;
			
			if(num == 0){
				System.out.println(n1);
			}
			else if( num  == 1){
				System.out.println(n2);
			}else{
				for(int i = 1; i < num; i++){
					aux = n1.add(n2);
					n1 = n2;
					n2 = aux;
				}
				System.out.println(aux);
			}
		}
	}	
}