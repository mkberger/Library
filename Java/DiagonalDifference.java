import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[][] = new int[n][n];
        for(int a_i=0; a_i < n; a_i++){
            for(int a_j=0; a_j < n; a_j++){
                a[a_i][a_j] = in.nextInt();
            }
        }
        // mkberger
        int primary_diagonal, secondary_diagonal, primary_val, secondary_val, difference;
        primary_diagonal = secondary_diagonal = primary_val = secondary_val = difference = 0;
        for(int i = 0; i < n; i++)
        {
            primary_val = a[i][i];
            secondary_val = a[i][n-1-i];
            primary_diagonal += primary_val;
            secondary_diagonal += secondary_val;
            difference += (primary_val - secondary_val);
        }
        System.out.println(Math.abs(difference));
        //
    }
}
