package pkg;
import java.util.Scanner;

public class Product {

	public static void main(String[] args) {
		try (Scanner sc = new Scanner(System.in)) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			
			if((a*b)%2 == 0) {
				System.out.println("Even");
			}else {
				System.out.println("odd");
			}
		}
	}

}
