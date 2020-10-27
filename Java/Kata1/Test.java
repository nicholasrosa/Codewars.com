public class Test
{
    public static void main(String[] args) 
    {
        String pangram1 = "The quick brown fox jumps over the lazy dog.";
        String pangram2 = "You shall not pass!";
        PangramChecker pc = new PangramChecker();
        System.out.print(pc.check(pangram1));
        System.out.print(pc.check(pangram2));
    }
}