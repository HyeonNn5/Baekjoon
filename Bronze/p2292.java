import java.io.*;

public class p2292 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n=Integer.parseInt(br.readLine());
        int route=0;
        if (n!=1) {
            for (int i = 1; i < n; i += 6*route) {
                route++;
            }
        }
        bw.write(String.valueOf(route)+1);
        bw.flush();
        bw.close();
    }
}
// 1  2 7  8 19  20 37 ...
// 1   6    12     18 ...
// 1+6*route
