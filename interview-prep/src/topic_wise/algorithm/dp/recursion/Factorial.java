package topic_wise.algorithm.dp.recursion;

class Factorial {
    int factorial(int n){
        if(n == 1) return 1;
        return n * factorial( n - 1); 
    }
}