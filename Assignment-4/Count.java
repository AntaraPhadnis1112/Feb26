import java.util.Scanner;

class Count
{
    public static void main(String args[])
    {
     Scanner sc = new Scanner(System.in);
        System.out.println("Enter 5 integers");
        int arr[] = new int[5];

         for(int i = 0; i<arr.length;i++)
        {
            arr[i]= sc.nextInt();
        }

        int positive = 0;
        int negative = 0;

        for (int num : arr )
        {
            if (num >= 0)
            {
                positive++;         
            }
            else if(num < 0)
            {
                negative++;
            }
        }
            System.out.println("Positive numbers = " + positive);
            System.out.println("Negative numbers = " + negative);
        }

}
