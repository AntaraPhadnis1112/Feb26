class Pattern3
{
    public static void main (String args[])
    {
        for(int i = 1;i<=5;i++)
        {
            int num = 1;
            System.out.print(num);
            for(int j = 2; j<=i;j++)
            {
                num = num+2;
                System.out.print ("*"+num);
            }

            System.out.println ();
        }
    }
}