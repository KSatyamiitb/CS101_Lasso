#include<simplecpp>

main_program{
//Write your code here
turtleSim("dhdhs",1000,1000);
left(90);penUp();forward(200);right(90);penDown();
repeat(4){
 forward(150);right(90);wait(0.5);
}
right(135);forward(100);left(45);
repeat(4){
 forward(150);left(90);wait(0.5);
}
forward(150);left(135);forward(100);right(45);forward(150);right(135);forward(100);
right(135);forward(150);right(45);forward(100);
wait(5);
}
