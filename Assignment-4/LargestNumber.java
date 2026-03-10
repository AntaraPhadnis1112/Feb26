import java.util.Scanner;

class LargestNumber
{
    public static void main (String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 5 integers");
        
        int arr[] = new int[5];

        for (int i = 0;i<arr.length;i++)
        {
            arr[i]= sc.nextInt();
        }
        int largest = arr[0]; 

        for(int i = 1; i < arr.length; i++)
        {
            if(arr[i] > largest)
            {
                largest = arr[i];
            }
        }

        System.out.println("Largest number = " + largest);
    }
}