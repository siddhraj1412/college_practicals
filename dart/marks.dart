import 'dart:io';
void main(){
    stdout.write("enter marks for subject 1 :- ");
    var a = stdin.readLineSync();
    stdout.write("enter marks for subject 2 :- ");
    var b = stdin.readLineSync();
    stdout.write("enter marks for subject 3 :- ");
    var c = stdin.readLineSync();
    stdout.write("enter marks for subject 4 :- ");
    var d = stdin.readLineSync();
    stdout.write("enter marks for subject 5 :- ");
    var e = stdin.readLineSync();
    
    var sum =int.parse(a!)+int.parse(b!)+int.parse(c!)+int.parse(d!)+int.parse(e!);
    var avg=sum/5;

    if(avg>=80){
      print("passed with grade A");
    }
    else if(avg >=70 && avg<79){
      print("passed with B grade");
    }
    else if(avg >=60 && avg<69){
      print("passed with B grade");
    }
    else if(avg >=50 && avg<49){
      print("passed with B grade");
    }
    else if(avg<18){
      print("you are failed");
    }
    else{
      print("you are barely passed");
    }
}