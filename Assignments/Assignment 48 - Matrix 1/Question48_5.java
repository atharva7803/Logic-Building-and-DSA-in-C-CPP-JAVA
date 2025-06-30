/*

5. Write a program which accept matrix from user and swap the contents of consecutive rows.

Input:

3   2   5   9
4   3   2   2
8   4   1   5
3   9   7   5

Output: 

4   3   2   2
3   2   5   9
3   9   7   5
8   4   1   5

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



    public void SwapRows(){
        int temp = 0;
        for(int i = 0; i < iRow-1; i = i+2) {
            for(int j = 0; j < iCol; j++) {
                temp = arr[i][j];
                arr[i][j] = arr[i+1][j];
                arr[i+1][j] = temp;
            }
        } 
    }

}

class Question48_5 {

    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in); 
        
        System.out.println("Enter number of rows: ");
        int no1 = sc.nextInt();

        System.out.println("Enter number of columns: ");
        int no2 = sc.nextInt();

        Matrix mobj = new Matrix(no1, no2);

        mobj.Accept();
        mobj.Display();

        System.out.println("After swapping consecutive rows: ");

        mobj.SwapRows();
        mobj.Display();

        mobj = null;

        System.gc();

    }
}  