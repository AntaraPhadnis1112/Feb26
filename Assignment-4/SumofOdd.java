import java.util.Scanner;

class SumofOdd
{
    public static void main (String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        int n = sc.nextInt();

        int sum = 0;

        for (int i=0;i<=n;i++)
        {
            if (i%2!=0)
            {
                sum = sum + i;
            }
        }
        
        System.out.println("Sum of odd numbers = " + sum);
    }
}