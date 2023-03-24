import java.util.*;

public class Main{
	public static void main(String[]args) {
		Scanner scanner = new Scanner(System.in);
		int array[] = new int [9];
		int sum = 0;
		for(int i=0;i<9;i++) {
			int n = scanner.nextInt();
			sum+=n;
			array[i] = n;
		}
		Arrays.sort(array);
		//9개 합에서 2개를 뺀다
exit:	for(int i=0;i<array.length;i++) {
			int total = sum;
			for(int j=i+1;j<array.length;j++) {
				total = total - array[i] - array[j];
				if(total == 100) {					
					array[i] = 0;
					array[j] = 0;
					break exit;
				}
				total = sum;
			}
		}
		for(int i=0;i<array.length;i++) {
			if(array[i]!=0) {
				System.out.println(array[i]);
			}
		}
	}
}
