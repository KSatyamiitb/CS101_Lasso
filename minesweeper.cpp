#include<simplecpp>
/*  author : KSatyam
    name   : Minesweeper */

main_program{
  initCanvas("",800,800);
  Rectangle R1(400,750,130,50);
  R1.setFill(true);
  R1.setColor(COLOR("red"));
  Text T(400,750,"MINESWEEPER");
  int i=0;
  int x,y;
  repeat(6){
    Line v(i,0,i,500);
    Line h(0,i,500,i);
    v.imprint();
    h.imprint();
    i+=100;
  }
  while(true){
    //bool q;
    int A=getClick();
    x=A/65536; y=A%65536;
    if((x>0 && x<100)&&((y>0 && y<100)||(y>200 && y<300)||(y>300 && y<400))){
      //q=0;
    }
    else if((x>100 && x<200)&&((y>0 && y<100)||(y>100 && y<200)||(y>400 && y<500))){
      //q=0;
    }
    else if((x>200 && x<300)&&((y>200 && y<300)||(y>300 && y<400)||(y>400 && y<500))){
      //q=0;
    }
    else if((x>300 && x<400)&&((y>100 && y<200)||(y>200 && y<300)||(y>400 && y<500))){
      //q=0;
    }
    else if((x>400 && x<500)&&((y>0 && y<100)||(y>100 && y<200)||(y>300 && y<400))){
      //q=0;
    }
    else if((x>0 && x<100)&&((y>100 && y<200)||(y>400 && y<500))){
      //q=1;
      break;
    }
    else if((x>100 && x<200)&&((y>200 && y<300)||(y>300 && y<400))){
      //q=1;
      break;
    }
    else if((x>200 && x<300)&&((y>0 && y<100)||(y>100 && y<200))){
      //q=1;
      break;
    }
    else if((x>300 && x<400)&&((y>0 && y<100)||(y>300 && y<400))){
      //q=1;
      break;
    }
    else if((x>400 && x<500)&&((y>200 && y<300)||(y>400 && y<500))){
      //q=1;
      break;
    }
    if(x<500 && y<500){
      Circle g(x,y,10);
      g.setFill(true);
      g.setColor(COLOR("green"));
      g.imprint();
    }
  }
  Circle r(x,y,10);
  r.setFill(true);
  r.setColor(COLOR("red"));

  Circle C1(400,400,315);
  C1.setFill(true);
  C1.setColor(COLOR("black"));

  Circle C(400,400,300);
  C.setFill(true);
  C.setColor(COLOR("yellow"));

  Circle e1(275,300,50);
  e1.setFill(true);
  e1.setColor(COLOR("black"));

  Circle e2(525,300,50);
  e2.setFill(true);
  e2.setColor(COLOR("black"));

  Rectangle R(400,530,350,100);
  R.setFill(true);
  R.setColor(COLOR("red"));

  Text t(400,530,"Y-O-U  L-O-O-S-E");
  wait(10);
}




