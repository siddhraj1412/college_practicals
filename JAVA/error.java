import java.util.*;
// class a{
//     public void ok(int a,int b) throws Exception{
//         System.out.println(a/b);
//     }
// }
class error{
    public static void main(String[] args) {
        // a b=new a();
        // try{
        //     b.ok(10,0);
        // }
        // catch(Exception e){
        //     System.out.println(e);
        // }
        // ArrayList<Integer> a=new ArrayList<>();
        // a.add(1);
        // System.out.println(a);
        int []a=new int[3];
        a[0]=1;
        a[1]=1;
        a[2]=1;
        int b[]=a;
        System.out.println(b[1]);
    }
}