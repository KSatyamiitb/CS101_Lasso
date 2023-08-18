#include<simplecpp>

main_program{
  initCanvas("",1000,1000);
  Turtle a,b,c;
  a.forward(100); b.right(90); b.forward(100); c.left(90); c.forward(100);
  Circle d(100,100,100);
  Rectangle e1(150,100,300,200);
  Line f(0,100,300,100), g(150,0,150,200);
  int A=getClick();
  cout<<A/65536<<","<<A%65536<<endl;
  Text h(400,400,"C++");
  Rectangle i(400,400, textwidth("C++")+10 , textheight("C++")+10 );
  e1.moveTo(500,500);
  e1.rotate(0.5);
  wait(.1);
  e1.rotate(0.5);
  wait(.1);
  e1.setFill(1);
  e1.setColor(COLOR("yellow"));
  e1.imprint();
  e1.moveTo(150,100);
  g.move(150,0);
  f.move(150,0);
  float j=textDescent();
  cout<<j<<endl;
  cout<<e1.getOrientation();
  wait(2);
}
