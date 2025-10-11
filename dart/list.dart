import 'dart:io';
void main(){
    var l=[];
    stdout.write("enter data for index 0 :- ");
    var a = stdin.readLineSync();
    l.add(a);
    stdout.write("enter data for index 1 :- ");
    var b = stdin.readLineSync();
    l.add(b);
    stdout.write("enter data for index 2 :- ");
    var c = stdin.readLineSync();
    l.add(c);
    stdout.write("enter data for index 3 :- ");
    var d = stdin.readLineSync();
    l.add(d);
    stdout.write("enter data for index 4 :- ");
    var e = stdin.readLineSync();
    l.add(e);
    print(l);

    print("what do you want to do with this list ?");
    print("1.replace data at specific position");
    print("2.add another data at first position");
    print("3.add another data at last position");
    print("4.delete data at specific position");
    print("5.delete data at first position");
    print("6.delete data at last position");
    print("7.sort the list");
    print("8.empty the list");
    print("9.reverse the list");
    print("10.exit");

    var ans=stdin.readLineSync();
    switch (ans){
        case "1":
          print("at wihich position do you want to replace the number?");
          var pos=stdin.readLineSync();
          print("what do you want to replace with?");
          var rep=stdin.readLineSync();
          l[int.parse(pos!)]=rep;
          print(l);

        case "2":
          print("enter your data :- ");
          var add=stdin.readLineSync();
          l.insert(0,add);
          print(l);

        case "3":
          print("enter your data :- ");
          var add=stdin.readLineSync();
          l.add(add);
          print(l);

        case "4":
          print("at wihich position do you want to replace the number?");
          var pos=stdin.readLineSync();
          l.removeAt(int.parse(pos!));
          print(l);

        case "5":
          l.removeAt(0);
          print(l);

        case "6":
          l.removeLast();
          print(l);

        case "7":
          l.sort();
          print(l);
        
        case "8":
          l.clear();
          print(l);
        
        case "9":
          l=l.reversed.toList();
          print(l);
        
        case "10":
          break;
        
        default :
          print("enter valid choice");
    }    
}