// Created by Nguyễn Mạnh Quân

import java.util.Scanner;

public class Class1
{
    static Scanner sc = new Scanner(System.in);

    static long sum = 0;
    static char[] x = new char[15];
    static String s;
    static int k;

    static void print(int i)
    {
        long tmp = 0;
        for(int j = k; j <= i; ++j) tmp = tmp * 10 + x[j] - '0';
        sum += tmp;
    }

    static void Try(int i)
    {
        for(int j = i - 1; j < s.length(); ++j)
        {
            x[i] = s.charAt(j);
            print(i);
            Try(i + 1);
            j = s.length() - 1;
        }
    }

    public static void main(String[] args)
    {
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0)
        {
            s = sc.nextLine();
            sum = 0;
            for(k = 1; k <= s.length(); ++k) Try(k);
            System.out.println(sum);
        }
    }
}
