using System;  
  
namespace BigO_Cs  
{  
    class Program  
    {  
        public static void foo(int[] array)  
       {  
            int sum = 0;
            int product = 1;
            for (int i = 0; i < array.Length; i++) {
                sum += array[i];
            }
            for (int i = 0; i < array.Length; i++) {
                product *= array[i] ;
            }
            Console.WriteLine(sum + ", " + product);
        }  

        public static void pairs(int[] array){
            for (int i = 0; i < array.Length; i++) {
                for (int j = 0; j < array.Length; j++) {
                    Console.WriteLine(array[i] + ", " + array[j]);
                }
            }
        }

        public static void unordPairs(int[] array){
        for (int i = 0; i < array.Length; i++) {
            for (int j = i + 1; j < array.Length; j++) {
                Console.WriteLine(array[i] + "," + array[j]);
            }
        }
    }

        public static void unordPairs2arr(int[] arrayA, int[] arrayB){
        for (int i = 0; i < arrayA.Length; i++) {
            for (int j = 0; j < arrayB.Length; j++) {
                Console.WriteLine(arrayA[i] + "," + arrayB[j]);
            }
        }
    }

        public static void unordPairs2arrmul(int[] arrayA, int[] arrayB){
        for (int i = 0; i < arrayA.Length; i++) {
            for (int j = 0; j < arrayB.Length; j++) {
                for (int k = 0; k < 100000; k++) {
                    Console.WriteLine(arrayA[i] + "," + arrayB[j]);
                }
            }
        }
    }

        public static void reverse(int[] array){
        for (int i = 0; i < array.Length / 2; i++) {
            int other = array.Length - i - 1;
            int temp = array[i];
            array[i] = array[other];
            array[other] = temp;
            Console.WriteLine(temp);

        }
    }

        public static void rever(int[] array){
            for (int i = array.Length - 1; i >= 0; i--) {
                Console.WriteLine(array[i] + " ");
            }
        }

        public static bool Prime(int n){
        for(int x = 2; x <= Math.Sqrt(n); x++){
            if(n % x == 0){
                Console.WriteLine(n + " is NOT prime");
                return false;
            }
        }
        Console.WriteLine(n + " is prime");
        return true;
    }

        public static int factorial(int n){
        if(n < 0){
            return -1;
        } else if (n == 0) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

        public static long fact(int n){
        long fac = 1;
        for(int i = 1; i <= n; i++){
            fac *= i;
        }
        Console.WriteLine(fac);
        return fac;
    }

        public static void allpermutation(String str){
        permutation(str, "");
        }
        
        public static void permutation(String str, String prefix){
            if (str.Length == 0)
            {
                Console.WriteLine(prefix);
            }
            else 
            {
                for (int i = 0; i < str.Length; i++)
                {
                    var rem = str.Substring(0,i-0) + str.Substring(i + 1);
                    permutation(rem, prefix + str[i].ToString());
                }
        }
        }

        public static void allFib(int n){
            for(int i = 0; i < n; i++){
                Console.WriteLine(i + ": " + fib(i));
            }
        }

        public static int fib(int n){
            if (n <= 0) return 0;
            else if (n == 1) return 1;
            return fib(n - 1) + fib(n - 2);
        }

        public static void allfibonacci(int n){
            int[] memo = new int[n + 1];
            for(int i = 0; i < n; i++){
                Console.WriteLine(i + ": " + fibonacci(i, memo));
            }
        }

        public static int fibonacci(int n, int[] memo){
            if (n <= 0) return 0;
            else if (n == 1) return 1;
            else if (memo[n] > 0) return memo[n];

            memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
            return memo[n];
        }

        public static int powersOf2(int n){
            if(n < 1){
                return 0;
            } else if (n == 1){
                Console.WriteLine(1);
                return 1;
            } else {
                int prev = powersOf2(n / 2);
                int curr = prev * 2;
                Console.WriteLine(curr);
                return curr;
            }
        }

        static void Main(string[] args)  
        {  
            int[] array = new int[] {1,2,3,4,5,6,7,8};
            int[] arrayA = new int[] {1,2,3,4};
            int[] arrayB = new int[] {2,3,4,5};
            int n = 7;
            String world = "WORLD";
            // foo(array);
            // pairs(array);
            // unordPairs(array);
            // unordPairs2arr(arrayA, arrayB);
            // unordPairs2arrmul(arrayA, arrayB);
            // reverse(array);
            rever(array);
            // Prime(n);
            // factorial(n);
            // fact(n);
            // allpermutation(world);
            // fib(n);
            // allFib(n);
            // allfibonacci(n);
            // powersOf2(n);
        }
    }    
} 