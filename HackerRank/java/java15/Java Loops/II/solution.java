import java.io.*;
import java.util.*;
import java.lang.Math;

public class Solution {

    public static void main(String[] args) {
        int a, b, n, s;
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt();
        for(int i=0; i<q ; i++){
        a = sc.nextInt();
        b = sc.nextInt();
        n = sc.nextInt();
        s = a;
        for(int j=0; j<n ; j++){
            s += b * Math.pow(2,j);
            System.out.print(s+" ");
        }
        System.out.println();
        }
        sc.close();
    }
}
