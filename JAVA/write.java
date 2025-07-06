import java.io.*;
class write{
    public static void main(String args[]){
        File f1=new File("1.txt");
        try{
            FileWriter f =new FileWriter("1.txt");
            f.write("hello");
            f.close();
        }
        catch(IOException e){
            System.out.println("error");
        }
    }
}