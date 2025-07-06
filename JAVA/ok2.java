import java.util.ArrayList;

public class ok2 {
    public static void main(String args[]){
        ArrayList<Integer> a=new ArrayList<Integer>();
        a.add(1);
        a.add(2);
        a.add(3);
        a.add(4);
        a.forEach((n)->{System.out.print(n);});
    }
}
