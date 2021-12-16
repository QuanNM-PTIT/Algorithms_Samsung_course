import java.util.Scanner;

public class Class1
{
    static Scanner sc = new Scanner(System.in);

    static long fibo[] = new long[100];
    static long k;
    static int n;

    static long findFibo(int n)
    {
        if (n == 1 || n == 2) return 1;
        if (fibo[n] > 0) return fibo[n];
        fibo[n] = findFibo(n - 1) + findFibo(n - 2);
        return fibo[n];
    }

    static long Try(long k, int n)
    {
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (n == 3 && k == 1) return k;
        if (n == 3 && k == 2) return k;
        if (n == 4)
        {
            if ((k & 1) == 1) return 2;
            else return 1;
        }
        if (k > fibo[n - 2]) return Try( k - fibo[n - 2], n - 1);
        return Try(k, n - 2);
    }

    static void solve()
    {
        findFibo(92);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            n = sc.nextInt();
            k = sc.nextLong();
            long l = Try(k, n);
            if(l == 1) System.out.println('A');
            else System.out.println('B');
        }
    }

    public static void main(String[] args)
    {
        solve();
    }
}
