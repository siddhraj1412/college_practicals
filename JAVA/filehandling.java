import java.io.*;
import java.util.*;
class filehandling{
    public static void main(String []args){
        
        // try{
        //     FileWriter f=new FileWriter("hello.txt");
        //     f.write("are ho gayi!!!");
        //     f.close();
        // }
        // catch(Exception e){
        //     System.out.println("Error");
        // }
        // try{
        //     PrintWriter writer = new PrintWriter(new FileOutputStream("hello.txt"));    
        //     writer.write("Innovation is good for mankind.\n");
        //     writer.flush();  
        //     writer.close();  
        // }
        // catch(Exception e){}
        // try {
        // PrintWriter fileOutput = new PrintWriter("FileOutput.txt");
        // fileOutput.printf(Locale.getDefault(), "Hi, What's the day today? %s.\n", new Date());
        // fileOutput.print("Here's an implementation of PrinWriter class for file writing.\n");
        // fileOutput.println("Hope Code Gym made it simpler for you to understand.");
        // fileOutput.append("One step at a time, and off you go!");
        // fileOutput.flush();
        // fileOutput.close();
        // } catch (Exception e) {
        // e.printStackTrace();
        // }
        // try{
        //     File f=new File("FileOutput.txt");
        //     Scanner s=new Scanner(f);
        //     PrintWriter p=new PrintWriter("hello.txt");
        //     int n=1;
        //     while(s.hasNextLine()){
        //         p.println(n+" "+s.nextLine());
        //         p.flush();
        //         n++;
        //     }
        //     p.close();
        //     s.close();
        // }
        // catch(Exception e){}
        try{
        FileWriter f=new FileWriter("ok.txt");
        f.write("Hello, World!");
        f.close();
        }
        catch(Exception e){}
    }
}