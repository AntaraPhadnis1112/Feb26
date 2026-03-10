class EvenNumbers
{
    public static void main (String args[])
    {
        printEvenNumbers();
    }

    public static void printEvenNumbers()
    {
        int i = 2;
        while(i<=50)
        {
            if(i%2==0)
            {
                System.out.println(" "+ i);
            }
            i++;
        }
    }
}