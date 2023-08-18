#include<simplecpp>

main_program{
//Write your code here
turtleSim();
penUp();forward(200);right(135);forward(200);right(90);forward(400);left(135);
forward(150);penDown();
repeat(36){
  repeat(12){
  forward(1);left(10);
  }
  forward(50);
  repeat(25){
  forward(1);right(10);
  }
  forward(50);
  repeat(12){
  forward(1);left(10);
  }
}wait(5);
}
