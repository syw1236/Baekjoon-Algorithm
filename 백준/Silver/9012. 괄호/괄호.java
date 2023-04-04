import java.util.*;
import java.io.*;

public class Main {
	static public StringBuilder sb = new StringBuilder();
	static public void check(String input) {
		Queue<String>q = new LinkedList<>();//큐 선언
		int count = 0;
		String[] array = input.split("");
		for(int i=0;i<array.length;i++) {
			if(array[i].equals("("))
				q.add(array[i]);
			else {
				if(q.size()==0) {
					sb.append("NO\n");
					return;
				}
				else
					q.remove();
			}
		}
		if(q.size()!=0)
			sb.append("NO\n");
		else
			sb.append("YES\n");	
	}
	public static void main(String[]args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		String n = br.readLine();
		int num = Integer.parseInt(n);
		for(int i=0;i<num;i++) {
			String input = br.readLine();
			check(input);
		}
		System.out.println(sb);
	}
	
}


