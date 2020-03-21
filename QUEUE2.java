import java.util.*;
import java.io.*;
import java.math.*;
import java.io.InputStream;
class  Solution{
    static class Reader
    {
        final private int BUFFER_SIZE = 1 << 25;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
 
        public Reader()
        {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
        private void fillBuffer() throws IOException
        {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
        public String readLine() throws IOException 
        { 
            byte[] buf = new byte[1280000]; // line length 
            int cnt = 0, c; 
            while ((c = read()) != -1) 
            { 
                if (c == '\n') 
                    break; 
                buf[cnt++] = (byte) c; 
            } 
            return new String(buf, 0, cnt); 
        } 
        private byte read() throws IOException
        {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
        public int nextInt() throws IOException
        {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do
            {
                ret = ret * 10 + c - '0';
            }  while ((c = read()) >= '0' && c <= '9');
 
            if (neg)
                return -ret;
            return ret;
        }
        public long nextLong() throws IOException 
        { 
            long ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
            if (neg) 
                return -ret; 
            return ret; 
        } 
    }
    
    static int N, M, K, L;
    static int[] arr;
    
    public static void main(String[] argh) throws Exception{
        Reader br= new Reader();
        int t= br.nextInt();
        StringBuilder sb= new StringBuilder();
        for(int tt=0; tt<t; tt++){
            N= br.nextInt();
            M= br.nextInt();
            K= br.nextInt();
            L= br.nextInt();
            ArrayList<Integer> list= new ArrayList<>();
            int zz;
            for(int i=0; i<N; i++){
                zz= br.nextInt();
                list.add(zz);
            }
            int lastRemoved= 0;
            int min= Integer.MAX_VALUE;
            Collections.sort(list);
            M++;
            boolean timeOver = false;
            for(int i=0; i<N; i++){
                int timeFrame= list.get(i);
                if(timeFrame <= K){
                    int diff= timeFrame - lastRemoved;
                    int cRem= diff/L;
                    M -= cRem;
                    if(min > (M*L - (diff%L))) min= M*L- (diff%L);
                    lastRemoved += cRem*L;
                    M++;
                    if(timeFrame == K){
                        timeOver= true;
                        break;
                    }
                }
                else{
                    int diff= K - lastRemoved;
                    int cRem= diff/L;
                    M -= cRem;
                    if(min > (M*L)) min= M*L;
                    lastRemoved += cRem*L;
                    M++; 
                    timeOver= true;
                    break;
                }
            }
            if(timeOver == true){
                if(min > (M*L)) min= M*L;    
            }
            else{
                int remT= K - lastRemoved;
                int za= remT / L;
                int zm= remT % L;
                int tim= ((M-za)*L) - zm;
                if(tim < min) min= tim;
            }
            
            sb.append(min);
            
            if(tt != t-1) sb.append("\n");
        }
        System.out.print(sb);
        
    }
    
    
}
