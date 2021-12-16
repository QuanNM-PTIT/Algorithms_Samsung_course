// Created by Nguyễn Mạnh Quân

package Test;

import java.util.*;

public class HelloWorld
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long p, q;
        while(t-- > 0)
        {
            p = sc.nextInt();
            q = sc.nextInt();
            long tmp = 0;
            while(true)
            {
                if(q % p == 0)
                {
                    System.out.print("1/" + q / p);
                    break;
                }
                tmp = q / p + 1;
                System.out.print("1/" + tmp + " + ");
                p = tmp * p - q;
                q *= tmp;
            }
            System.out.println();
        }
    }
}
