import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[]args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		Queue<Integer>q = new LinkedList<>();//큐 선언
		String n = br.readLine();
		int num = Integer.parseInt(n);
		for(int i=0;i<num;i++) {
			q.add(i+1);
		}
		while(q.size()!=1) {
			q.remove();
			int firstNum = q.poll();
			q.add(firstNum);		
		}
		int lastNum = q.poll();
		System.out.println(lastNum);

	}
}