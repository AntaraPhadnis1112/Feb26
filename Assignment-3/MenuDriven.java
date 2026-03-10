import java.util.Scanner;

class MenuDriven
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Choice");
        int choice = sc.nextInt();

        switch (choice)
        {
            case 1 :
                System.out.println("Grade Eveluation System");
                break;
            case 2 :
                System.out.println("Leap Year Check");
                break;
            case 3 :
                System.out.println("Day of the week");
                break;
            case 4 :
                System.out.println("Identify Default Values of Variables");
                break;
            default :
                System.out.println("Exit");
        }
    }
}