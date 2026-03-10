class Pattern
{
    public static void main (String args[])
    {
        for(int i = 1;i<=5;i++)
        {
            System.out.print(i);
        
            for(int j = 2 ; j<=i;j++)
            {
                System.out.print ("*" + i);
            }

            System.out.println ();
        }

        for(int i = 5;i>=2;i--)
        {
            System.out.print(i);
        
            for(int j = 2 ; j<=i;j++)
            {
                System.out.print ("*" + i);
            }

            System.out.println ();
        }
    }
}