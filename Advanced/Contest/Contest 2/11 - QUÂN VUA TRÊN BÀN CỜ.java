// Created by Nguyễn Mạnh Quân

import java.util.Scanner;

public class Class1
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args)
    {
        int s1 = sc.nextInt(), s2 = sc.nextInt(), f1 = sc.nextInt(), f2 = sc.nextInt();
        System.out.println(Math.max(Math.abs(s1 - f1), Math.abs(s2 - f2)));
    }
}
