import java.util.Scanner;
import java.util.Arrays;

class SearchNumber
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        Integer arr[] = new Integer[5];

        System.out.print("Enter 5 integers: ");
        for(int i = 0; i < 5; i++)
        {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the number to search: ");
        int num = sc.nextInt();

        boolean found = Arrays.asList(arr).contains(num);

        if(found)
        {
            System.out.println("Found");
        }
        else
        {
            System.out.println("Not Found");
        }
    }
}