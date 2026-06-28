// class Car {
//    late String brand;
//  late int speed;
//
//   Car(this.brand, this.speed);
//  Car.WithoutSpeed(this.brand) {
//    speed =0;
//  }Car.withoutBrand(this.speed){
//    brand="0";
//    }Car.Default(){
//    brand="default";
//    speed=0;
//    }
//    String getSpeed() {
//      return " the speed is $speed";
//    }
//  }
// class Person{
//   late  String name;
//   late Car car;
//   late int age;
//
//
//   isChild(){
//     if(age<15){
//       return true;
//     }else{
//       return false;
//     }
//   }
//
//
//   Person(this.name, this.car,this.age);
//
//
// }
// void main(){
//
//   final car1 = Car("bmw",140);
//   final car2 = Car.withoutBrand(140);
//   final car3 = Car.WithoutSpeed("bmw");
//   final car4 = Car.Default();
//   // final Person person1 =Person("ahmed", Car("mercedes",200));
//   final Person person1 =Person("ahmed", Car("mercedes",260),19);
//   print("/////////////////////////////");
//   print(car1.speed);
//   print("/////////////////////////////");
//   print(car1.brand);
//   print("/////////////////////////////");
//   print(car2.speed);
//   print("/////////////////////////////");
//   print(car2.brand);
//   print("/////////////////////////////");
//   print(car3.speed);
//   print("/////////////////////////////");
//   print(car3.brand);
//   print("/////////////////////////////");
//   print(car4.speed);
//   print("/////////////////////////////");
//   print(car4.brand);
//   print("/////////////////////////////");
//   print(person1.name);
//   print("/////////////////////////////");
//   print(person1.isChild());
//   print("/////////////////////////////");
//   print(person1.car.getSpeed());
// }

//encapsulation


// void main(){
//   final BankAccount bank = BankAccount("abdelrahman", 1000000000000);
//   print(bank.balance);
//   print(bank.name);
//
// }
// class BankAccount{
//
//   final String name;
//   final double balance;
//   BankAccount(this.name, this.balance);
//
// }

// class Student{
//
//   late var name;
//    late var id;
//    late var level;
//
//   Student(studentName, studentId,studentLevel){
//     name = studentName;
//     id= studentId;
//     level= studentLevel;
//
//
//   }
// }
// void main(){
//    final student =Student("abdelrahman", 235, true);
//  print(student.name);
//  print(student.id);
//  print(student.level);
//
// }


// class BankAccount{
//   String? name;
//   double _balance;
//
//   BankAccount(this.name,this._balance);
//
//   set withDraw(double amount)  {
//
//     if (amount > 0 && amount <= _balance){
//       _balance -= amount;
//       print("Success and new balance is $_balance");
//
//     }else{
//       print("invalid");
//     }
//   }
//   set deposit(double amount){
//     if(amount <0){
//       print("invalid amount");
//     }else{
//       _balance += amount;
//       print("Success and new balance is $_balance");
//     }
//   }
//
//
// }
import 'class_object.dart';
void main(){
BankAccount bankAccount =BankAccount("abdelrahman", 1000);
bankAccount.withDraw =500;
bankAccount.deposit =1000;
print(bankAccount.balance);

}