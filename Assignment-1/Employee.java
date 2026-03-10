class Employee
{
    int empid;
	String empName;
	int age;
	int salary;

    Employee()
    {
        empid = 11;
        empName = "Antara";
        age = 24;
        salary = 45000;
    }
    Employee(int a, String s, int b, int c)
    {
        empid = a;
        empName = s;
        age = b;
        salary = c;
    }

    public static void main (String args[])
    {
        Employee e = new Employee();
        
        System.out.println(e.empid);
        System.out.println(e.empName);
        System.out.println(e.age);
        System.out.println(e.salary);

    }


}