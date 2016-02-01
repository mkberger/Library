import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        // mkberger
        double positive_counter, negative_counter, zero_counter;
        positive_counter = negative_counter = zero_counter = 0.0;
        for(int val : arr)
        {
            if (val > 0) positive_counter++;
            else if (val < 0) negative_counter++;
            else zero_counter++;
        }
        System.out.println(positive_counter/n);
        System.out.println(negative_counter/n);
        System.out.println(zero_counter/n);
        //
    }
}
