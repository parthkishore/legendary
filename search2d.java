import java.util.Arrays;
public class Seach2darray{
    public static void main(String[] args) {
        int[][] arr={
            {34,43,2,22,3},
            {6,76,66,5,6},
            {18,23,45},
            {4,21}
        };
        int target = 18;
        int[] ans = search(arr,target);
        System.out.println(Arrays.toString(ans));
        
    }
    static int[] search(int[][] arr,int target){
        for(int i = 0;i<arr.length;++i){
            for(int j = 0;j<arr[i].length;++j){
                if(arr[i][j]==target){
                    return new int[] {i,j};
                }
            }
        }
    }

}    
