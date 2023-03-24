import java.util.*;

public class Main {
	public static void main(String[]args) {
		Scanner scanner = new Scanner(System.in);
		int [] array = new int [5];
		int sum = 0;
		for(int i=0;i<array.length;i++) {
			int n = scanner.nextInt();
			sum+=n;
			array[i] = n;
		}
		sum=sum/array.length;//평균값
		System.out.println(sum);
		Arrays.sort(array);//정렬
		int index = array.length/2;
		System.out.println(array[index]);
	}
}