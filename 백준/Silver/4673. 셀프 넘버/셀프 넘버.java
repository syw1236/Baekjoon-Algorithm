import java.util.*;

public class Main{
	public static int plus(int n) {
		int sum = n;
		while(n!=0) {
			sum = sum+n%10;
			n/=10;
		}
		return sum;
	}
	public static void main(String[]args) {
		Scanner scanner = new Scanner(System.in);
		boolean array[] = new boolean[10002];
		for(int i=1;i<=10000;i++) {
			int value = plus(i);
			if(value <= 10000) {
				array[value] = true;
			}
		}
		for(int i=1;i<=10000;i++) {
			if(array[i] == false) {
				System.out.println(i);
			}
		}
	}
}
