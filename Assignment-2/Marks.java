class Marks
{
    public static void main(String []args)
    {
        int Maths = 80;
        int Science = 85;
        int History = 90;

        int AverageMarks = (Maths + Science + History)/3;
        System.out.println ("Average Marks = " + AverageMarks);

        if(AverageMarks>=90)
        {
            System.out.println("Grade A");
        }
        else if (AverageMarks>=70 && AverageMarks<=89)
        {
            System.out.println("Grade B");
        }
        else if (AverageMarks>=50 && AverageMarks<=69)
        {
            System.out.println("Grade C");
        }
        else if (AverageMarks>=30 && AverageMarks<=49)
        {
            System.out.println("Grade D");
        }
        else
        {
             System.out.println("Fail");
        }
    }
}