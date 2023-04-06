import java.util.*;
import java.io.*;
public class Main {
	public static void main(String[]args) throws IOException {
		TreeSet<Integer> set = new TreeSet<Integer>();
		BufferedWriter buf = new BufferedWriter(new OutputStreamWriter(System.out));
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String n = br.readLine();
		int num = Integer.parseInt(n);
		for(int i=0;i<num;i++) {
			set.add(Integer.parseInt(br.readLine()));
		}
		Iterator iter = set.iterator();
		while(iter.hasNext()) {
			buf.write((int) iter.next()+"\n");
		}
		buf.flush();
	}
}
