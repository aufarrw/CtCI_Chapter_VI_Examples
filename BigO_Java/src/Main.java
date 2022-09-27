import org.w3c.dom.Node;

import static java.lang.Math.sqrt;

public class Main {
    public static void foo(int[] array) {
        int sum = 0;
        int product = 1;
        for (int i = 0; i < array.length; i++) {
            sum += array[i];
        }
        for (int i = 0; i < array.length; i++) {
            product *= array[i] ;
        }
        System.out.println(sum + ", " + product);
    }

    public static void pairs(int[] array){
        for (int i = 0; i < array. length; i++) {
            for (int j = 0; j < array. length; j++) {
                System.out.println (array[i] + ", " + array[j]);
            }
        }
    }

    public static void unordPairs(int[] array){
        for (int i = 0; i < array.length; i++) {
            for (int j = i + 1; j < array.length; j++) {
                System.out . println (array[i] + "," + array[j]);
            }
        }
    }

    public static void unordPairs2arr(int[] arrayA, int[] arrayB){
        for (int i = 0; i < arrayA.length; i++) {
            for (int j = 0; j < arrayB.length; j++) {
                System.out.println(arrayA[i] + "," + arrayB[j]);
            }
        }
    }

    public static void unordPairs2arrmul(int[] arrayA, int[] arrayB){
        for (int i = 0; i < arrayA.length; i++) {
            for (int j = 0; j < arrayB.length; j++) {
                for (int k = 0; k < 100000; k++) {
                    System.out.println(arrayA[i] + "," + arrayB[j]);
                }
            }
        }
    }

    public static void reverse(int[] array){
        for (int i = 0; i < array.length / 2; i++) {
            int other = array.length - i - 1;
            int temp = array[i];
            array[i] = array[other];
            array[other] = temp;
            System.out.println(temp);

        }
    }

    public static void rever(int[] array){
        for (int i = array.length - 1; i >= 0; i--) {
            System.out.println(array[i] + " ");
        }
    }

    static boolean Prime(int n){
        for(int x = 2; x <= sqrt(n); x++){
            if(n % x == 0){
                System.out.println(n + " is NOT prime");
                return false;
            }
        }
        System.out.println(n + " is prime");
        return true;
    }

    static int factorial(int n){
        if(n < 0){
            return -1;
        } else if (n == 0) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

    static long fact(int n){
        long fac = 1;
        for(int i = 1; i <= n; i++){
            fac *= i;
        }
        System.out.println(fac);
        return fac;
    }

    public static void allpermutation(String str){
        permutation(str, "");
    }

    public static void permutation(String str, String prefix){
        if (str.length() == 0) {
            System.out.println(prefix);
            } else {
            for (int i = 0; i < str.length(); i++) {
                String rem = str.substring(0, i) + str.substring(i + 1);
                permutation(rem, prefix + str.charAt(i));
            }
        }
    }

    public static void allFib(int n){
        for(int i = 0; i < n; i++){
            System.out.println(i + ": " + fib(i));
        }
    }

    static int fib(int n){
        if (n <= 0) return 0;
        else if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }

    public static void allfibonacci(int n){
        int[] memo = new int[n + 1];
        for(int i = 0; i < n; i++){
            System.out.println(i + ": " + fibonacci(i, memo));
        }
    }

    static int fibonacci(int n, int[] memo){
        if (n <= 0) return 0;
        else if (n == 1) return 1;
        else if (memo[n] > 0) return memo[n];

        memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
        return memo[n];
    }

    static int powersOf2(int n){
        if(n < 1){
            return 0;
        } else if (n == 1){
            System.out.println(1);
            return 1;
        } else {
            int prev = powersOf2(n / 2);
            int curr = prev * 2;
            System.out.println(curr);
            return curr;
        }
    }

    public static void main(String[] args) {
        int[] array = {1,2,3,4,5,6,7,8};
        int[] arrayA = {1,2,3,4};
        int[] arrayB = {2,3,4,5};
        int n = 7;
        String world = "World";
        foo(array);
//        pairs(array);
//        unordPairs(array);
//        unordPairs2arr(arrayA, arrayB);
//        unordPairs2arrmul(arrayA, arrayB);
//        reverse(array);
//        rever(array);
//        Prime(n);
//        factorial(n);
//        fact(n);
//        allpermutation(world);
//        fib(n);
//        allFib(n);
//        allfibonacci(n);
//        powersOf2(n);
    }
}