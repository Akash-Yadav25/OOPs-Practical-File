#include<iostream.h>
#include<conio.h>
class Bat
{
 public:
 void bats()
 {
  cout<<"i am a bat\n";
 }
};
class Mammal : public Bat
{
 public:
 void mammals()
 {
  cout<<"i am a mammal\n";
 }
};
class WingedMammal : public Bat
{
 public:
 void name()
 {
  cout<<"I am Winged Mammal\n";
 }
};
void main()
{
 clrscr();
 Mammal m1;
 WingedMammal m2;
 m1.bats();
 m1.mammals();
 m2.bats();
 m2.name();
 getch();
}