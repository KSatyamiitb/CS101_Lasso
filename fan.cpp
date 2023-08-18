#include<simplecpp>

main_program{
//Write your code here
turtleSim("dhdhs",1000,1000);
int b=(100/cosine(45));
int a=(100/cosine(15));
repeat(12){
  forward(100),left(90);forward(100);left(135);forward(b);left(165);
}
penUp();forward(300);penDown();
repeat(12){
  forward(100),left(90);forward(100);left(135);forward(b-a);penUp();forward(a);penDown();left(165);
}
wait(0.5);
}
