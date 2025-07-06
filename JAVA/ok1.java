import java.util.*;

interface hi{
    public String hello(String s);
}
public class ok1 {
    public static void main(String args[]){
        hi h1=(s)->s+"!";
        hi h2=(s)->s+"?";
        print("oyy",h1);
        print("oyy",h2);
    }
    public static void print(String s,hi h){
        String result = h.hello(s);
        System.out.println(result);
    }
}