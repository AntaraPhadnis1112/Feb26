class LeapYear
{
    public static void main (String args[])
    {
        int year1 = 2024;
        int year2 = 1900;

        checkYear(year1);
        checkYear(year2);
    }

    public static void checkYear(int year)
    {

        if ((year%4==0 && year%100 !=0)||(year%400==0))
        {
            System.out.println(year   + "It is a Leap Year");
        }
        else
        {
            System.out.println(year   + "It is not a Leap Year");
        }
    }

    
}