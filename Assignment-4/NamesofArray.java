import java.util.Scanner;

class NamesofArray
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String arr[] = new String[4];

        System.out.println("Enter 4 names : ");

    for(int i = 0; i<arr.length;i++)
    {
        arr[i]= sc.next();
        
    }
    System.out.println("Names are:");
    for (String names : arr)
    {
        System.out.println(names);
    }
    }   
}