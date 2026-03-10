import java.util.Scanner;

class SumofArray
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[5];

        System.out.println("Enter 5 integers : ");
        
        int sum = 0;

    for(int i = 0; i<arr.length;i++)
    {
        arr[i]= sc.nextInt();
        sum = sum + arr[i];
        
    }
    for (int num : arr)
    {
        System.out.print(num + " ");
    }
    System.out.print("Sum = " + sum);
    
    }   
}