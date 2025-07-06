import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class read {
    public static void main(String args[]){
        File f1=new File("1.txt");
        try{
            Scanner s=new Scanner(f1);
            while(s.hasNextLine()){
                String a=s.nextLine();
                System.out.println(a);
            }
        }
        catch(IOException e){
            System.out.println("error");
        }
    }
}
