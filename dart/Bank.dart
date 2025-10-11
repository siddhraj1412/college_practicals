class Bank{
  dynamic amount=0;
  bank(){
    print(this.amount);
  }
  deposite(amount){
    this.amount=this.amount+amount;
  }
  withdraw(amount){
    if(this.amount-amount<1000){
      print("insufficient balance");
      print("Account should have atleast 1000 rupess");
    }
    else{
      this.amount=this.amount-amount;
      print("successfully withdrawn money");
    }
  }
  checkBalance(){
    print("Current Balance is ${this.amount}");
  }
}
void main(){
  Bank my=new Bank();
  my.deposite(1000);
  my.checkBalance();
  my.withdraw(1000);
  my.checkBalance();
}