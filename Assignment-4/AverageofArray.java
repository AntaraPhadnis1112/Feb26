import java.util.Scanner;

class AverageofArray
{
    public static void main (String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 5 integers");
        int sum = 0;
        int arr[] = new int[5];

        for (int i = 0;i<arr.length;i++)
        {
            arr[i]= sc.nextInt();
            sum = sum + arr[i];
        }
        double average = sum / arr.length;

        System.out.println("Sum = " + sum);
        System.out.println("Average = " + average);
    }
}