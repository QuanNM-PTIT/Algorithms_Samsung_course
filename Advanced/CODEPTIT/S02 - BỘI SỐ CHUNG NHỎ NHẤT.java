import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class Class1
{
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args)
    {
        int t = sc.nextInt();
        sc.nextLine();
        String a, b;
        while(t-- > 0)
        {
            a = sc.nextLine();
            b = sc.nextLine();
            BigInteger x, y;
            x = new BigInteger(a, 10);
            y = new BigInteger(b, 10);
            BigInteger GCD = x.gcd(y);
            x = x.multiply(y);
            GCD = x.divide(GCD);
            System.out.println(GCD);
        }
    }
}
