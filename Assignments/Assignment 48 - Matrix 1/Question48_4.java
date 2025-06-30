/*

4. Write a program which accept matrix from user and display addition of elements from each column.

Input:

3   2   5   9
4   3   2   2
8   4   1   5
3   9   7   5

Output: 18  18  15  25

*/


import java.util.*;

class Matrix{
    public int iRow,iCol;
    public int arr[][];

    public Matrix(int a, int b){
        this.iRow = a;
        this.iCol = b;

        arr = new int[iRow][iCol];
    }

    protected void finalize(){
        System.out.println("Garbage collector is collecting the memory of an object!");
        arr = null;
    }

    public void Accept(){
        Scanner sc = new Scanner(System.in); 
        System.out.println("Enter values: ");

        for(int i=0; i<iRow; i++) {
            for(int j=0; j<iCol; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
    }

    public void Display(){
        System.out.println("Elements from the matrix are: ");
        for(int i=0; i<iRow; i++) {
            for(int j=0; j<iCol; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println();
        }
    }



    public int[] AddColumn(){
        int[] colSums = new int[iCol];
        for (int j = 0; j < iCol; j++) {
            for (int i = 0; i < iRow; i++) {
                colSums[j] += arr[i][j];
            }
        }
        return colSums;
    }

}

class Question48_4 {

    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in); 
        
        System.out.println("Enter number of rows: ");
        int no1 = sc.nextInt();

        System.out.println("Enter number of columns: ");
        int no2 = sc.nextInt();

        Matrix mobj = new Matrix(no1, no2);

        mobj.Accept();
        mobj.Display();

        int[] colSums = mobj.AddColumn();

        System.out.print("Column sums are: ");
        for (int sum : colSums) {
            System.out.print(sum + "\t");
        }
        System.out.println();

        mobj = null;

        System.gc();

    }
}  