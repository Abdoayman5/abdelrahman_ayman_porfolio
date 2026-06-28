import 'dart:math';
import 'dart:convert';
void main(){
 double radius =5;
 double area = pi *pow(radius, 2);
 print(area);
 print(sqrt(16));
 var random = Random();
 print(random.nextInt(100));
String jsonString ='{"name":"abdelrahman" ,"age":20}';
Map<String,dynamic> user = jsonDecode(jsonString);
print('name: ${user ['name']}');
print('age : ${user['age']}');
 
 // var date = DateTime(2050,4,7);
 // print(date);
 // print(date.year);
 // print(date.month);
 // print(date.day);
 // var num1=2.5;
 // var num2=5;
 // var num3 = 17;
 // var abs= num1.abs();
 // print(num1.ceil());
 // print(num1.round());
 // print(abs);
 // print(num1.compareTo(num2));
 // print(num1.remainder(num2));
 // print(sqrt(num2));
 // print(num2.isEven);
 // print(num3.isOdd);
 // print(min(num1,num3));
 // print(max(num2 , num1));
 // print(pow(num2,num1));
 //
 //  List<String>  names = ['Khalid', 'Ali','Sameer'];
 //  List<double> grades = [99.3, 87.7, 65.7];
 //  var namess=["ahmed", "youmna","abdelrahman","habiba"];
 //  namess.forEach((elem) {
 //    print(" the name is : $elem");
 // });
 //  var newList = namess.join(" ");
 //  print(newList);
 //  var rev=grades.reversed;
 //  print(rev);
 // for(int i=0; i<names.length;i++){
 //    String gradeLetter ="";
 //    double score = grades[i];
 //    if(score>=95){
 //      gradeLetter= "A+";
 //    }else if(score>=90){
 //      gradeLetter="A";
 //    }else if (score>=85){
 //      gradeLetter="B+";
 //    }else if (score>=80){
 //      gradeLetter="B";
 //    }else if (score >=75){
 //      gradeLetter="B-";
 //    }else if (score >=70){
 //      gradeLetter="C+";
 //    }else if (score>=65){
 //      gradeLetter="C";
 //    }else if ( score >=60){
 //      gradeLetter="D";
 //    }else{
 //      gradeLetter="Fail";
 //    }
 //    print("${names[i]} $gradeLetter");
 //  }
}







