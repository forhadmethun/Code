package leetcode.greedy;
import java.util.*;
public class MaximizeSumOfArrayAfterKNegations_1005 {
    public int largestSumAfterKNegations(int[] A, int K) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for(int a : A){pq.add(a);}
        while(K-- > 0){pq.add(-pq.poll());}
        int sum = 0;
        for(int i = 0; i < A.length; i++){
            sum += pq.poll();
        }
        return sum;
    }
}
