import java.util.Scanner;

class PositiveNumber
{
    static Scanner sc = new Scanner(System.in);
    public static void main (String args[])
    {
        askForPositiveNumber();
    }

    public static void askForPositiveNumber()
    {
        int num;
        do
        {
            System.out.println("Enter Positive Number ");
            num = sc.nextInt();

        }
        while(num<=0);

        System.out.println("You entered positive number " + num);
    }
    

}