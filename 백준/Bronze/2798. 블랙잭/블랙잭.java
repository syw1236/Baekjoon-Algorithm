import java.util.*;

public class Main{
	public static void main(String[]args) {
		Scanner scanner = new Scanner(System.in);
		int sum = 0;
		int result = 0;
		int n = scanner.nextInt();//카드의 개수
		int m = scanner.nextInt();
		int array[] = new int[n];
		for(int i=0;i<array.length;i++) {
			int card = scanner.nextInt();
			array[i] = card;
		}
		for(int i=0;i<array.length-2;i++) {
			for(int j=i+1;j<array.length-1;j++) {
				for(int h=j+1;h<array.length;h++){
					sum = array[i] + array[j] + array[h];
					if(result<sum && sum<=m) {
						result = sum;
					}
				}
			}
		}
		System.out.println(result);
	}
}
