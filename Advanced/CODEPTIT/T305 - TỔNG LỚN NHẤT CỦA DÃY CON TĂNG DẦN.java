// Created by Nguyễn Mạnh Quân

package Test;

import java.util.*;

public class HelloWorld
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(), n;
        while(t-- > 0)
        {
            n = sc.nextInt();
            int a[] = new int[n];
            int f[] = new int[n];
            for(int i = 0; i < n; ++i)
            {
                a[i] = sc.nextInt();
                f[i] = a[i];
            }
            int ans = f[0];
            for(int i = 1; i < n; ++i)
            {
                for(int j = 0; j < i; ++j) if(a[i] > a[j] && f[i] < f[j] + a[i]) f[i] = f[j] + a[i];
                ans = Math.max(ans, f[i]);
            }
            System.out.println(ans);
        }
    }
}
