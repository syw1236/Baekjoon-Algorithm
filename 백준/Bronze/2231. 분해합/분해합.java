import java.util.*;
public class Main{
	public static void main(String[]args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();//입력받는 변수
		int count = 0; 
		int i;
		for(i=1;i<=n;i++) {
			int value = i;
			int total = 0;
			total+=value;
			while(value!=0) {
				total += value%10;
				value/=10;
			}
			if(total == n) {
				System.out.println(i);
				break;
			}
		}
		if(i>=n)
			System.out.println(0);
		
	}
}
