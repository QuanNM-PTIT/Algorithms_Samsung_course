//// Created by Nguyễn Mạnh Quân
//
//#include <stdio.h>
//
//bool check(long long a, long long b, long long k, long long m, long long n, long long mid)
//{
//    return (mid * a -  (mid / k) * a + mid * b - (mid / m) * b >= n);
//}
//
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    while(t--)
//    {
//        long long a, b, k, m, n;
//        scanf("%lld%lld%lld%lld%lld", &a, &k, &b, &m, &n);
//        long long l = 0, r = 1e9, ans = 0, mid;
//        while(l <= r)
//        {
//            mid = (l + r) / 2;
//            if(check(a, b, k, m, n, mid))
//            {
//                ans = mid;
//                r = mid - 1;
//            }
//            else l = mid + 1;
//        }
//        printf("%lld\n", ans);
//    }
//    return 0;
//}

#include<stdio.h>

long long res;
long long a[65534];
long long findE[16] = {0, 8, 88, 888, 8888, 88888, 888888, 8888888, 88888888, 888888888, 8888888888, 88888888888, 888888888888, 8888888888888, 88888888888888, 888888888888888};

int binSearch(long long x)
{
    int l = 0, r = 65533, mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] == x) return mid;
        if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

void calc(int k)
{
    --k;
    if(!k)
    {
        res = 6;
        return;
        
    }
    if(k == 1)
    {
        res = 8;
        return;
    }
    calc(k >> 1);
    res = res * 10 + ((k & 1) ? 8 : 6);
}

void Pre()
{
    int cnt = 0;
    while(cnt < 65534)
    {
        res = 0;
        calc(cnt + 1);
        a[cnt++] = res;
    }
}

int main()
{
    Pre();
    int t, n, e;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        e = binSearch(findE[n]);
        printf("%d\n", e + 1);
        for(int i = e; i >= 0; --i) printf("%lld ", a[i]);
        printf("\n");
    }
    return 0;
}

