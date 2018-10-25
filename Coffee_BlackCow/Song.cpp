#include <arduino.h>
#include "Pitches.h"

/********* 부저 핀 번호와 조도센서 값 *************/
int val;
int pin=A0;
/************************************************/


/* 사랑을 했다 */
int Loved(int PIN)
{

 /*  부저가 울릴때마다 조도센서를 검사하여,
  *  사용자가 컵을 들었다는것이 확인되면
  *  Song 함수를 즉시 중단
  */
   tone(PIN,NOTE_E6);
   val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
   
   
    delay(250);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    tone(PIN,NOTE_C6);
     
    delay(250);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    tone(PIN,NOTE_E6);
     
    delay(250);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    tone(PIN,NOTE_G6);
    
    delay(500);
    noTone(PIN);
    delay(500);
    
    
    
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
     
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
     
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
     
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    
    delay(500);
    noTone(PIN);
    delay(500);
   
    
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(500);
    
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_G6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(500);
  
    
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(500);
   
    
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(500);
    
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_A6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_G6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(500);
    
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
     delay(250);
    noTone(PIN);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_A6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_G6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(500);
    
    
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
     delay(250);
    noTone(PIN);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_A6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_C7);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_A6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_G6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_E6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    tone(PIN,NOTE_D6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(500);
    noTone(PIN);
    delay(500);
    
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
     delay(250);
    noTone(PIN);
    tone(PIN,NOTE_C6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    tone(PIN,NOTE_A6);
    val = analogRead(pin);
  val = map(val, 0, 1023, 0, 255);
  val = constrain(val, 0, 255);
  if(val <90)
    return;
    delay(250);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_G6);
    
    delay(250);
    tone(PIN,NOTE_E6);
    delay(500);
    noTone(PIN);
    delay(250);
    tone(PIN,NOTE_D6);
    delay(250);
    tone(PIN,NOTE_C6);
    delay(250);
    tone(PIN,NOTE_D6);
    delay(250);
    tone(PIN,NOTE_C6);
    delay(500);
    noTone(PIN);
}

void wayBackHome(int PIN)
{
  tone(PIN, NOTE_AS3);
  delay(350); noTone(5);
  tone(PIN, NOTE_AS3);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_AS3);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_G4);
  delay(250); noTone(5);
  tone(PIN, NOTE_F4);
  delay(500);

  tone(PIN, NOTE_AS3);
  delay(250); noTone(5);
  tone(PIN, NOTE_D4);
  delay(250);
  // 멈춘 시간 속 잠든
  
  tone(PIN, NOTE_C4);
  delay(300); noTone(5);
  tone(PIN, NOTE_C4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_C4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_AS3);
  delay(250); noTone(5);
  tone(PIN, NOTE_D4);
  delay(700); noTone(5);
  // 너를 찾아가
  
  tone(PIN, NOTE_AS3);
  delay(300); noTone(5);
  tone(PIN, NOTE_AS3);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_AS3);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_G4);
  delay(250); noTone(5);
  tone(PIN, NOTE_F4);
  delay(500); noTone(5);

  tone(PIN, NOTE_AS3);
  delay(250); noTone(5);
  tone(PIN, NOTE_D4);
  delay(250);
  // 아무리 막아도 결국
  
  tone(PIN, NOTE_C4);
  delay(300); noTone(5);
  tone(PIN, NOTE_C4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_C4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_AS3);
  delay(250); noTone(5);
  tone(PIN, NOTE_AS3);
  delay(500); noTone(5);
  // 너의 곁인걸

  tone(PIN, NOTE_G4);
  delay(250); noTone(5);
  tone(PIN, NOTE_A4);
  delay(250); noTone(5);
  tone(PIN, NOTE_AS4);
  delay(300); noTone(5);
  tone(PIN, NOTE_AS4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_AS4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_D5);
  delay(250);
  tone(PIN, NOTE_G4);
  delay(500);
  tone(PIN, NOTE_F4);
  delay(700);
  // 길고 긴 여행을 끝내

  tone(PIN, NOTE_C4);
  delay(300); noTone(5);
  tone(PIN, NOTE_C4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_C4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_F4);
  delay(250);
  tone(PIN, NOTE_D4);
  delay(700);
  // 이젠 돌아가

  tone(PIN, NOTE_AS3);
  delay(350); noTone(5);
  tone(PIN, NOTE_AS3);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_AS3);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_G4);
  delay(250); noTone(5);
  tone(PIN, NOTE_F4);
  delay(500); noTone(5);

  tone(PIN, NOTE_AS3);
  delay(250); noTone(5);
  tone(PIN, NOTE_D4);
  delay(250);
  // 너라는 집으로 지금
  
  tone(PIN, NOTE_C4);
  delay(350); noTone(5);
  tone(PIN, NOTE_C4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_C4);
  delay(150); noTone(5); delay(150);
  tone(PIN, NOTE_AS3);
  delay(250); noTone(5);
  tone(PIN, NOTE_AS3);
  delay(500); noTone(5); delay(2000);
  // 다시 way back home
}
