#include <arduino.h>

/*
 * RGB LED모듈에 R,G,B의 적당한 값을 인가
 */

void OFF(int R, int G, int B)
{
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  return;
}
void YELLOW(int R, int G, int B)
{
  analogWrite(R, 25);
  analogWrite(G, 10);
  analogWrite(B, 0);
  return;
}
void RED(int R, int G, int B)
{
  digitalWrite(R,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  return;
}
void GREEN(int R, int G, int B)
{
  digitalWrite(R,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(B,LOW);
  return;
}
void BLUE(int R, int G, int B)
{
  digitalWrite(R,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,HIGH);
  return;
}
