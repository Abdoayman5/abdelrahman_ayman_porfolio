class BankAccount{
  String? name;
  double _balance;

  BankAccount(this.name,this._balance);
  get balance => _balance;
  set withDraw(double amount)  {

    if (amount > 0 && amount <= _balance){
      _balance -= amount;
      print("Success and new balance is $_balance");

    }else{
      print("invalid");
    }
  }
  set deposit(double amount){
    if(amount <0){
      print("invalid amount");
    }else{
      _balance += amount;
      print("Success and new balance is $amount");
    }
  }


}
// print(bankAccount.name);
// print(bankAccount.balance);
//
// bankAccount.balance = bankAccount.balance - 500;
//
// print(bankAccount.balance);
//
// if (bankAccount.balance < 500) {
// print("valid");
// } else {
// bankAccount.balance -=500;
// print(bankAccount.balance);
// }
