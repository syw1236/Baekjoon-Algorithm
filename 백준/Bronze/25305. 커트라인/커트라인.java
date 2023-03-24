import java.util.*;

public class Main {
	public static void main(String[]args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();//응시자 수
		int k = scanner.nextInt(); //상 받는 사람의 수
		Integer array[] = new Integer[n];
		for(int i=0;i<array.length;i++) {
			int score = scanner.nextInt();
			array[i] = score;
		}
		Arrays.sort(array,Collections.reverseOrder());
		System.out.println(array[k-1]);	
	}
}