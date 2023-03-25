import java.util.*;

public class Main {
	public static void main(String[]args) {
		Scanner scanner = new Scanner(System.in);
		TreeSet<Integer> set = new TreeSet<>();
		int n = scanner.nextInt();
		for(int i=0;i<n;i++) {
			int num = scanner.nextInt();
			set.add(num);
		}
		Iterator iter = set.iterator();
		while(iter.hasNext()) {
			System.out.print(iter.next()+" ");
		}
	}
}