package leetcode.math;
import java.util.*;
public class LargestPerimeterTriangle_976 {
    public int largestPerimeter(int[] A) {
        Arrays.sort(A);
        for(int i = A.length - 1; i >=2; i--){
            if(A[i] <  A[i-1] + A[i-2]){
                return A[i] + A[i-1] + A[i-2];
            }
        }
        return 0;
    }
}
