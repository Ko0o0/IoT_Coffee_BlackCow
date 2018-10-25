#include "DigitalTemSensor.h"
#include "RGB.h"
#include "Song.h"

/***********************핀 번호 ******************************/

//부저 핀 번호
int buzzerPin = 6;

//RGB LED 핀
int R = 9;
int G = 10;
int B = 11;

//CDS 핀
int cds = A0;
/*****************************************************/


/************** 모듈 인풋 값*****************/
//현재, 이전 온도 값
float cur_temp;
float bef_temp = -1;

//조도값
int cdsValue = 0;

/*******************************************/



/*************** 로직용 F/T 변수*******************/
//컵을 올려 놓았다 : 1
int isOn = 0;

//노래가 한번이라도 틀어졌다 : 1
int isPlay = 0;

//온도가 내려가는 중 : 1 
int isDown = 0;

//loop 카운트
int loopCount = 0;
/************************************************/



void setup(void) {
 Serial.begin(9600);
 pinMode(R,OUTPUT);
 pinMode(G,OUTPUT);
 pinMode(B,OUTPUT);
 pinMode(buzzerPin, OUTPUT);
}

/*               소스설명
 *                
 * 디지털 온도센서가 온도에 즉각반응 하지 않으므로 
 * 온도센서상 수치가 상승중인지 하강중인지 판별할 필요가 있다.
 * 상승중이라면, 측정하고자 하는 대상의 온도에 도달하지 못한것이고
 * 하강중이라면, 측정하고자 하는 대상의 온도가 하강중이라는 뜻
 * 혹은 측정대상이 사라지고 상온을 재고 있다는 뜻이다.
 * 
 * 그러므로 처음 컵을 올려놓았을때를
 * 조도센서값으로 판별, 일단 노란불을 켜고(로딩중이라는 뜻)
 * 온도가 하강중일때를(측정대상의 온도에 도달하였음을 의미) 
 * 판별하여 temCheck을 실행한다.
 * 
 * 그런데 커피가 너무 뜨거우면 노랑불이 너무 오랫동안 떠있어야 하므로
 * 커피가 적정온도를 넘어가는 순간 일단 빨간불을 켠다.
 * 
 * 온도가 하강중인것은 온도센서로 부터 나온 수치를
 * 루프를 50회 돌때마다 측정한 값들중 바로 이전값과 현재값을 비교하여
 * 하강중인지 판별한다. 50회바다 측정하는 이유는 
 * 온도센서 특성상 온도변화가 미미하기 때문이다.
 * 
 * 이전값과 같은 값이 나올수도 있다.
 * 이때는 isDown 판별값을 이용하여
 * 하강중이라면, temCheck를 실행하고
 * 상승중이라면, 아직 온도가 상승중이므로 아무런 행동을 하지 않는다.
 */


void loop() {

  /* 온도값과 조도값을 각 센서로부터 입력받음 */
  cur_temp = getTemp();
  cdsValue = analogRead(cds);
  cdsValue = map(cdsValue, 0, 1023, 0, 255);
  cdsValue = constrain(cdsValue, 0, 255);

  if(cdsValue > 90) {
      if(isOn == 0) {
          YELLOW(R,G,B);
      }
      isOn = 1;

      if(34.00 < cur_temp) {
        temCheck(cur_temp);
      }
      
      if(!(loopCount % 50)) {
        if(cur_temp < bef_temp) {
           isDown = 1;
           temCheck(cur_temp);  
        }
        else if( cur_temp == bef_temp && isDown) {
            temCheck(cur_temp);  
        }
      } 
  }
  else if(cdsValue <= 90 && isOn != 0) {        
      Initailize();
  }
  SerialDebug();
  
  if(!(loopCount % 50))
    bef_temp = cur_temp; 
  if(loopCount > 10000)
    loopCount = 0;
   else
    loopCount++;

}


/* 각 로직용 판별값을 초기화 */
void Initailize()
{
    isOn = 0;
    isPlay = 0;
    isDown = 0;
    bef_temp = -1;
    
    OFF(R,G,B);
    noTone(buzzerPin);
    
    Serial.println("끗");  
}


/* 디버그를 하기위한 중요 값들 출력 */
void SerialDebug()
{
  Serial.print("current temp : ");
  Serial.println(cur_temp);
  Serial.print("before temp : ");
  Serial.println(bef_temp);
  
  Serial.print("cdsValue : ");
  Serial.println(cdsValue);
  Serial.print("isOnValue: ");
  Serial.println(isOn);
  Serial.println();
  Serial.print("loopCount : ");
  Serial.println(loopCount);
  
}



/* 온도에 따른 다른 행동을 보이기위한 조건문
 * 커피가 차가울때 -> 파란불
 * 커피가 적정온도 -> 초록불과 함께 알림음
 * 커피가 뜨거울때 -> 빨간불
 */
void temCheck(float val)
{
    if(val < 31.00) {
      BLUE(R,G,B);
       
      
    }
    else if( (31.00 <= val) && (val <= 34.00)) {
      GREEN(R,G,B);
      Loved(6);  
    }
    else if(val > 34.00) {
        RED(R,G,B);
        noTone(buzzerPin);
    }
    return;
}
