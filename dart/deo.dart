import 'dart:io';
void main(){
    print("hello");

    stdout.write("enter no.1 :- ");
    var a = stdin.readLineSync();
    print("A value is :- $a");
    print("enter no.2 :- ");
    var b = stdin.readLineSync();
    print("B value is :- $b");

    var c=int.parse(a!)+int.parse(b!);
    print("sum of a and b is :- $c");

    if(c==30){
        print("c is 30");
    }
    else if(c<30){
        print("c is less than 30");
    }
    else{
        print("c is greater than 30");
    }
}