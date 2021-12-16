// Created by Nguyễn Mạnh Quân

package Test;

import java.util.*;

public class HelloWorld
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n + 1];
        int f[] = new int[n + 1];
        for(int i = 1; i <= n; ++i) a[i] =sc.nextInt();
        int ans = 1;
        for(int i = 1; i <= n; ++i)
        {
            f[i] = 1;
            for(int j = 1; j < i; ++j) if(a[j] < a[i]) f[i] = Math.max(f[i], f[j] + 1);
            ans = Math.max(ans, f[i]);
        }
        System.out.print(ans);
    }
}
