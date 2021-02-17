import java.io.*;
import java.util.*;

 public class B{

   // FastPrint (remember to call FastPrint.out.close() at the end)
   // Pedro Ribeiro (DCC/FCUP)

   static class FastPrint {
       public static PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
   }

   // FastScanner
   // Pedro Ribeiro (DCC/FCUP)

   static class FastScanner {
       BufferedReader br;
       StringTokenizer st;

       public FastScanner(InputStream stream) {
   	br = new BufferedReader(new InputStreamReader(stream));
       }

       String next() {
   	while (st == null || !st.hasMoreElements()) {
   	    try {
   		st = new StringTokenizer(br.readLine());
   	    } catch (IOException e) {
   		e.printStackTrace();
   	    }
   	}
   	return st.nextToken();
       }

       int nextInt() {
   	return Integer.parseInt(next());
       }

       long nextLong() {
   	return Long.parseLong(next());
       }

       double nextDouble() {
   	return Double.parseDouble(next());
       }

       String nextLine(){
   	String str = "";
   	try {
   	    str = br.readLine();
   	} catch (IOException e) {
   	    e.printStackTrace();
   	}
   	return str;
       }

   }

  public static void main(String[] args) {
    FastScanner sc = new FastScanner(System.in);
    int t = sc.nextInt();
    for(int w = 0 ; w < t ; w++){
      TreeMap<Integer, Integer> map = new TreeMap<Integer, Integer>();
      Integer n = sc.nextInt();
      for(int i = 0 ; i < n ; i++) {
        int pick = sc.nextInt();
        if(!map.containsKey(pick)) map.put(pick,(i+1));
        else map.put(pick,-1);
      }
      int flag = 0;
      for(Map.Entry<Integer,Integer> entry : map.entrySet()) {
        int key = entry.getKey();
        int value = entry.getValue();

        if(value!=-1) {
           FastPrint.out.println(value);
           flag=1;
           break;
         }
      }
      if (flag==0) FastPrint.out.println(-1);
    }
    FastPrint.out.close();
  }
}
