# include<iostream>
main(){
  std::cout<<"After a fair bit of trial and error I’ve come to discover that people who struggle to code don’t just struggle on big problems, or even smallish problems (i.e. write an implementation of a linked list). They struggle with tiny problems. \n"<<"So I set out to develop questions that can identify this kind of developer and came up with a class of questions I call “FizzBuzz Questions” named after a game children often play (or are made to play) in schools in the UK.\n";

for (int i=1; i<=100; i++){

  if ((i % 3)!=0){
    if((i%5)!=0){
    std::cout<<i<<"\n";
    }
    else {
    std::cout<<"Buzz!\n";  
    }
  }
  else {
     if((i%5)!=0){
    std::cout<<"Fizz!\n";
     }
     else {
    std::cout<<"Fizz!Buzz!\n";  
    }
  }
}


}