import java.util.*;
import java.util.regex.*;
public class regex {
    public static void main(String args[]){
        Pattern p=Pattern.compile("Hello");
        Matcher m=p.matcher("Hello000");
        if(m.find()){
            System.out.println("y");    
        }
        else{
            System.out.println("n");
        }
        System.out.println(Pattern.matches("geeksforge*ks", "geeksforgeeks"));
        System.out.println(Pattern.matches("","siddhraj"));
    }
}
