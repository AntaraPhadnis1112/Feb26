class values
{
    byte a; 
    short b; 
    int c; 
    long d; 
    float e; 
    double f; 
    char g; 
    boolean h;

    public static void main (String args[])
    {
        values V = new values();
        System.out.println("byte: " + V.a);
        System.out.println("short: " + V.b);
        System.out.println("int: " + V.c);
        System.out.println("long: " + V.d);
        System.out.println("float: " + V.e);
        System.out.println("double: " + V.f);
        System.out.println("char: " + V.g);
        System.out.println("boolean: " + V.h);
    }
}