/*
A pangram is a sentence that contains every single letter of the alphabet at least once. For example, 
the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z 
at least once (case is irrelevant).

Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.
*/

class PangramChecker
{
    public boolean check(String sentence)
    {
        boolean flag = true;
        int count = 0;
        char[] alphabetArr = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 
                                'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

        for(int i = 0; i < alphabetArr.length; i++)
        {
            while(count < sentence.length())
            {
                if(Character.toLowerCase(sentence.charAt(count)) == alphabetArr[i])
                {
                    flag = true;
                    break;
                }
                
                flag = false;
                count++;
            }

            if(flag == false)
                break;

            count = 0;
        }

        return flag;
    }
}