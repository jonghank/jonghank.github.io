#define buT01 8
#define buT02 9
#define buT03 10
#define buT04 11

#define rEcordLED A5
#define pLayLED A4

#define rElay01 2
#define rElay02 3
#define rElay03 4
#define rElay04 5

#define rEcord 12
#define pLay 13

int iNput01;
int iNput02;
int iNput03;
int iNput04;

//녹음 및 재생 모드 관련 변수 시작
int recordPushed = 0;
int playPushed = 0;

int recordLast = 0;
int playLast = 0;

int recordPushToNot = 0;
int recordNotToPush = 0;

int playPushToNot = 0;
int playNotToPush = 0;

int recordMod = 0;
int playMod = 0;
//녹음 및 재생 모드 관련 변수 끝


//릴레이1 저장변수 시작
unsigned int pAuse00 = 0;
unsigned int pLay01 = 0;
unsigned int pAuse02 = 0;
unsigned int pLay03 = 0;
unsigned int pAuse04 = 0;
unsigned int pLay05 = 0;
unsigned int pAuse06 = 0;
unsigned int pLay07 = 0;
unsigned int pAuse08 = 0;
unsigned int pLay09 = 0;
unsigned int pAuse10 = 0;
unsigned int pLay11 = 0;
unsigned int pAuse12 = 0;
unsigned int pLay13 = 0;
unsigned int pAuse14 = 0;
unsigned int pLay15 = 0;
unsigned int pAuse16 = 0;
unsigned int pLay17 = 0;
unsigned int pAuse18 = 0;
unsigned int pLay19 = 0;
unsigned int pAuse20 = 0;
unsigned int pLay21 = 0;
unsigned int pAuse22 = 0;
unsigned int pLay23 = 0;
//릴레이1 저장변수 끝

//릴레이1 녹화 실행용 복제 변수 시작
unsigned int pAuseC00 = 0;
unsigned int pLayC01 = 0;
unsigned int pAuseC02 = 0;
unsigned int pLayC03 = 0;
unsigned int pAuseC04 = 0;
unsigned int pLayC05 = 0;
unsigned int pAuseC06 = 0;
unsigned int pLayC07 = 0;
unsigned int pAuseC08 = 0;
unsigned int pLayC09 = 0;
unsigned int pAuseC10 = 0;
unsigned int pLayC11 = 0;
unsigned int pAuseC12 = 0;
unsigned int pLayC13 = 0;
unsigned int pAuseC14 = 0;
unsigned int pLayC15 = 0;
unsigned int pAuseC16 = 0;
unsigned int pLayC17 = 0;
unsigned int pAuseC18 = 0;
unsigned int pLayC19 = 0;
unsigned int pAuseC20 = 0;
unsigned int pLayC21 = 0;
unsigned int pAuseC22 = 0;
unsigned int pLayC23 = 0;
//릴레이1 녹화 실행용 복제 변수 시작

//릴레이2 저장변수 시작
unsigned int re2pAuse00 = 0;
unsigned int re2pLay01 = 0;
unsigned int re2pAuse02 = 0;
unsigned int re2pLay03 = 0;
unsigned int re2pAuse04 = 0;
unsigned int re2pLay05 = 0;
unsigned int re2pAuse06 = 0;
unsigned int re2pLay07 = 0;
unsigned int re2pAuse08 = 0;
unsigned int re2pLay09 = 0;
unsigned int re2pAuse10 = 0;
unsigned int re2pLay11 = 0;
unsigned int re2pAuse12 = 0;
unsigned int re2pLay13 = 0;
unsigned int re2pAuse14 = 0;
unsigned int re2pLay15 = 0;
unsigned int re2pAuse16 = 0;
unsigned int re2pLay17 = 0;
unsigned int re2pAuse18 = 0;
unsigned int re2pLay19 = 0;
unsigned int re2pAuse20 = 0;
unsigned int re2pLay21 = 0;
unsigned int re2pAuse22 = 0;
unsigned int re2pLay23 = 0;
//릴레이2 저장변수 끝

//릴레이2 녹화 실행용 복제 변수 시작
unsigned int re2pAuseC00 = 0;
unsigned int re2pLayC01 = 0;
unsigned int re2pAuseC02 = 0;
unsigned int re2pLayC03 = 0;
unsigned int re2pAuseC04 = 0;
unsigned int re2pLayC05 = 0;
unsigned int re2pAuseC06 = 0;
unsigned int re2pLayC07 = 0;
unsigned int re2pAuseC08 = 0;
unsigned int re2pLayC09 = 0;
unsigned int re2pAuseC10 = 0;
unsigned int re2pLayC11 = 0;
unsigned int re2pAuseC12 = 0;
unsigned int re2pLayC13 = 0;
unsigned int re2pAuseC14 = 0;
unsigned int re2pLayC15 = 0;
unsigned int re2pAuseC16 = 0;
unsigned int re2pLayC17 = 0;
unsigned int re2pAuseC18 = 0;
unsigned int re2pLayC19 = 0;
unsigned int re2pAuseC20 = 0;
unsigned int re2pLayC21 = 0;
unsigned int re2pAuseC22 = 0;
unsigned int re2pLayC23 = 0;
//릴레이2 녹화 실행용 복제 변수 시작

//릴레이3 저장변수 시작
unsigned int re3pAuse00 = 0;
unsigned int re3pLay01 = 0;
unsigned int re3pAuse02 = 0;
unsigned int re3pLay03 = 0;
unsigned int re3pAuse04 = 0;
unsigned int re3pLay05 = 0;
unsigned int re3pAuse06 = 0;
unsigned int re3pLay07 = 0;
unsigned int re3pAuse08 = 0;
unsigned int re3pLay09 = 0;
unsigned int re3pAuse10 = 0;
unsigned int re3pLay11 = 0;
unsigned int re3pAuse12 = 0;
unsigned int re3pLay13 = 0;
unsigned int re3pAuse14 = 0;
unsigned int re3pLay15 = 0;
unsigned int re3pAuse16 = 0;
unsigned int re3pLay17 = 0;
unsigned int re3pAuse18 = 0;
unsigned int re3pLay19 = 0;
unsigned int re3pAuse20 = 0;
unsigned int re3pLay21 = 0;
unsigned int re3pAuse22 = 0;
unsigned int re3pLay23 = 0;
//릴레이3 저장변수 끝

//릴레이3 녹화 실행용 복제 변수 시작
unsigned int re3pAuseC00 = 0;
unsigned int re3pLayC01 = 0;
unsigned int re3pAuseC02 = 0;
unsigned int re3pLayC03 = 0;
unsigned int re3pAuseC04 = 0;
unsigned int re3pLayC05 = 0;
unsigned int re3pAuseC06 = 0;
unsigned int re3pLayC07 = 0;
unsigned int re3pAuseC08 = 0;
unsigned int re3pLayC09 = 0;
unsigned int re3pAuseC10 = 0;
unsigned int re3pLayC11 = 0;
unsigned int re3pAuseC12 = 0;
unsigned int re3pLayC13 = 0;
unsigned int re3pAuseC14 = 0;
unsigned int re3pLayC15 = 0;
unsigned int re3pAuseC16 = 0;
unsigned int re3pLayC17 = 0;
unsigned int re3pAuseC18 = 0;
unsigned int re3pLayC19 = 0;
unsigned int re3pAuseC20 = 0;
unsigned int re3pLayC21 = 0;
unsigned int re3pAuseC22 = 0;
unsigned int re3pLayC23 = 0;
//릴레이3 녹화 실행용 복제 변수 시작

//릴레이4 저장변수 시작
unsigned int re4pAuse00 = 0;
unsigned int re4pLay01 = 0;
unsigned int re4pAuse02 = 0;
unsigned int re4pLay03 = 0;
unsigned int re4pAuse04 = 0;
unsigned int re4pLay05 = 0;
unsigned int re4pAuse06 = 0;
unsigned int re4pLay07 = 0;
unsigned int re4pAuse08 = 0;
unsigned int re4pLay09 = 0;
unsigned int re4pAuse10 = 0;
unsigned int re4pLay11 = 0;
unsigned int re4pAuse12 = 0;
unsigned int re4pLay13 = 0;
unsigned int re4pAuse14 = 0;
unsigned int re4pLay15 = 0;
unsigned int re4pAuse16 = 0;
unsigned int re4pLay17 = 0;
unsigned int re4pAuse18 = 0;
unsigned int re4pLay19 = 0;
unsigned int re4pAuse20 = 0;
unsigned int re4pLay21 = 0;
unsigned int re4pAuse22 = 0;
unsigned int re4pLay23 = 0;
//릴레이4 저장변수 끝

//릴레이4 녹화 실행용 복제 변수 시작
unsigned int re4pAuseC00 = 0;
unsigned int re4pLayC01 = 0;
unsigned int re4pAuseC02 = 0;
unsigned int re4pLayC03 = 0;
unsigned int re4pAuseC04 = 0;
unsigned int re4pLayC05 = 0;
unsigned int re4pAuseC06 = 0;
unsigned int re4pLayC07 = 0;
unsigned int re4pAuseC08 = 0;
unsigned int re4pLayC09 = 0;
unsigned int re4pAuseC10 = 0;
unsigned int re4pLayC11 = 0;
unsigned int re4pAuseC12 = 0;
unsigned int re4pLayC13 = 0;
unsigned int re4pAuseC14 = 0;
unsigned int re4pLayC15 = 0;
unsigned int re4pAuseC16 = 0;
unsigned int re4pLayC17 = 0;
unsigned int re4pAuseC18 = 0;
unsigned int re4pLayC19 = 0;
unsigned int re4pAuseC20 = 0;
unsigned int re4pLayC21 = 0;
unsigned int re4pAuseC22 = 0;
unsigned int re4pLayC23 = 0;
//릴레이3 녹화 실행용 복제 변수 시작

void setup(void)
{
  for ( int i = 8 ; i < 12 ; i++) {
    pinMode(i, INPUT);
  }

  for ( int i = 2 ; i < 6 ; i++ ) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);

  }

  pinMode(12, INPUT);
  pinMode(13, INPUT);

  pinMode(rEcordLED, OUTPUT);
  pinMode(pLayLED, OUTPUT);

  digitalWrite(rEcordLED, LOW);
  digitalWrite(pLayLED, LOW);
  
  Serial.begin(9600);

}

void loop(void)
{

  recordPushed = digitalRead(rEcord);
  playPushed = digitalRead(pLay);

  if (recordLast != recordPushed) {
    if (recordPushed == 1) {
      recordNotToPush = 1;
    }
    else {
      recordPushToNot = 1;
    }
  }

  if (playLast != playPushed) {
    if (playPushed == 1) {
      playNotToPush = 1;
    }
    else {
      playPushToNot = 1;
    }
  }

  recordLast = recordPushed;
  playLast = playPushed;


  if ((recordPushToNot == 1) && (recordNotToPush == 1)) {
    recordMod = 1;
    playMod = 0;
    Serial.println("레코드 모드 On");
    digitalWrite(rEcordLED, HIGH);
    digitalWrite(pLayLED, LOW);
    

    //릴레이1 녹화 변수 초기화
    pAuse00 = 0;
    pLay01 = 0;
    pAuse02 = 0;
    pLay03 = 0;
    pAuse04 = 0;
    pLay05 = 0;
    pAuse06 = 0;
    pLay07 = 0;
    pAuse08 = 0;
    pLay09 = 0;
    pAuse10 = 0;
    pLay11 = 0;
    pAuse12 = 0;
    pLay13 = 0;
    pAuse14 = 0;
    pLay15 = 0;
    pAuse16 = 0;
    pLay17 = 0;
    pAuse18 = 0;
    pLay19 = 0;
    pAuse20 = 0;
    pLay21 = 0;
    pAuse22 = 0;
    pLay23 = 0;
    //릴레이1 녹화변수 초기화 끝

    //릴레이2 녹화변수 초기화
    re2pAuse00 = 0;
    re2pLay01 = 0;
    re2pAuse02 = 0;
    re2pLay03 = 0;
    re2pAuse04 = 0;
    re2pLay05 = 0;
    re2pAuse06 = 0;
    re2pLay07 = 0;
    re2pAuse08 = 0;
    re2pLay09 = 0;
    re2pAuse10 = 0;
    re2pLay11 = 0;
    re2pAuse12 = 0;
    re2pLay13 = 0;
    re2pAuse14 = 0;
    re2pLay15 = 0;
    re2pAuse16 = 0;
    re2pLay17 = 0;
    re2pAuse18 = 0;
    re2pLay19 = 0;
    re2pAuse20 = 0;
    re2pLay21 = 0;
    re2pAuse22 = 0;
    re2pLay23 = 0;
    //릴레이2 녹화변수 초기화 끝

    //릴레이3 녹화변수 초기화
    re3pAuse00 = 0;
    re3pLay01 = 0;
    re3pAuse02 = 0;
    re3pLay03 = 0;
    re3pAuse04 = 0;
    re3pLay05 = 0;
    re3pAuse06 = 0;
    re3pLay07 = 0;
    re3pAuse08 = 0;
    re3pLay09 = 0;
    re3pAuse10 = 0;
    re3pLay11 = 0;
    re3pAuse12 = 0;
    re3pLay13 = 0;
    re3pAuse14 = 0;
    re3pLay15 = 0;
    re3pAuse16 = 0;
    re3pLay17 = 0;
    re3pAuse18 = 0;
    re3pLay19 = 0;
    re3pAuse20 = 0;
    re3pLay21 = 0;
    re3pAuse22 = 0;
    re3pLay23 = 0;
    //릴레이3 녹화변수 초기화 끝

    //릴레이4 녹화변수 초기화
    re4pAuse00 = 0;
    re4pLay01 = 0;
    re4pAuse02 = 0;
    re4pLay03 = 0;
    re4pAuse04 = 0;
    re4pLay05 = 0;
    re4pAuse06 = 0;
    re4pLay07 = 0;
    re4pAuse08 = 0;
    re4pLay09 = 0;
    re4pAuse10 = 0;
    re4pLay11 = 0;
    re4pAuse12 = 0;
    re4pLay13 = 0;
    re4pAuse14 = 0;
    re4pLay15 = 0;
    re4pAuse16 = 0;
    re4pLay17 = 0;
    re4pAuse18 = 0;
    re4pLay19 = 0;
    re4pAuse20 = 0;
    re4pLay21 = 0;
    re4pAuse22 = 0;
    re4pLay23 = 0;
    //릴레이2 녹화변수 초기화 끝

    Serial.println(recordMod);
    recordPushToNot = 0;
    recordNotToPush = 0;
  }


  if ((playPushToNot == 1) && (playNotToPush == 1)) {
    if (playMod == 0) {
      playMod = 1;
      recordMod = 0;
      Serial.println("플레이 모드 On");
      digitalWrite(pLayLED, HIGH);
      digitalWrite(rEcordLED, LOW);

      //릴레이1 재생변수에 녹화변수 대입 초기화
      pAuseC00 = pAuse00;
      pLayC01 = pLay01;
      pAuseC02 = pAuse02;
      pLayC03 = pLay03;
      pAuseC04 = pAuse04;
      pLayC05 = pLay05;
      pAuseC06 = pAuse06;
      pLayC07 = pLay07;
      pAuseC08 = pAuse08;
      pLayC09 = pLay09;
      pAuseC10 = pAuse10;
      pLayC11 = pLay11;
      pAuseC12 = pAuse12;
      pLayC13 = pLay13;
      pAuseC14 = pAuse14;
      pLayC15 = pLay15;
      pAuseC16 = pAuse16;
      pLayC17 = pLay17;
      pAuseC18 = pAuse18;
      pLayC19 = pLay19;
      pAuseC20 = pAuse20;
      pLayC21 = pLay21;
      pAuseC22 = pAuse22;
      pLayC23 = pLay23;
      //릴레이1 재생변수에 녹화변수 대입 초기화 끝

      //릴레이2 재생변수에 녹화변수 대입 초기화
      re2pAuseC00 = re2pAuse00;
      re2pLayC01 = re2pLay01;
      re2pAuseC02 = re2pAuse02;
      re2pLayC03 = re2pLay03;
      re2pAuseC04 = re2pAuse04;
      re2pLayC05 = re2pLay05;
      re2pAuseC06 = re2pAuse06;
      re2pLayC07 = re2pLay07;
      re2pAuseC08 = re2pAuse08;
      re2pLayC09 = re2pLay09;
      re2pAuseC10 = re2pAuse10;
      re2pLayC11 = re2pLay11;
      re2pAuseC12 = re2pAuse12;
      re2pLayC13 = re2pLay13;
      re2pAuseC14 = re2pAuse14;
      re2pLayC15 = re2pLay15;
      re2pAuseC16 = re2pAuse16;
      re2pLayC17 = re2pLay17;
      re2pAuseC18 = re2pAuse18;
      re2pLayC19 = re2pLay19;
      re2pAuseC20 = re2pAuse20;
      re2pLayC21 = re2pLay21;
      re2pAuseC22 = re2pAuse22;
      re2pLayC23 = re2pLay23;
      //릴레이2 재생변수에 녹화변수 대입 초기화 끝

      //릴레이3 재생변수에 녹화변수 대입 초기화
      re3pAuseC00 = re3pAuse00;
      re3pLayC01 = re3pLay01;
      re3pAuseC02 = re3pAuse02;
      re3pLayC03 = re3pLay03;
      re3pAuseC04 = re3pAuse04;
      re3pLayC05 = re3pLay05;
      re3pAuseC06 = re3pAuse06;
      re3pLayC07 = re3pLay07;
      re3pAuseC08 = re3pAuse08;
      re3pLayC09 = re3pLay09;
      re3pAuseC10 = re3pAuse10;
      re3pLayC11 = re3pLay11;
      re3pAuseC12 = re3pAuse12;
      re3pLayC13 = re3pLay13;
      re3pAuseC14 = re3pAuse14;
      re3pLayC15 = re3pLay15;
      re3pAuseC16 = re3pAuse16;
      re3pLayC17 = re3pLay17;
      re3pAuseC18 = re3pAuse18;
      re3pLayC19 = re3pLay19;
      re3pAuseC20 = re3pAuse20;
      re3pLayC21 = re3pLay21;
      re3pAuseC22 = re3pAuse22;
      re3pLayC23 = re3pLay23;
      //릴레이3 재생변수에 녹화변수 대입 초기화 끝

      //릴레이4 재생변수에 녹화변수 대입 초기화
      re4pAuseC00 = re4pAuse00;
      re4pLayC01 = re4pLay01;
      re4pAuseC02 = re4pAuse02;
      re4pLayC03 = re4pLay03;
      re4pAuseC04 = re4pAuse04;
      re4pLayC05 = re4pLay05;
      re4pAuseC06 = re4pAuse06;
      re4pLayC07 = re4pLay07;
      re4pAuseC08 = re4pAuse08;
      re4pLayC09 = re4pLay09;
      re4pAuseC10 = re4pAuse10;
      re4pLayC11 = re4pLay11;
      re4pAuseC12 = re4pAuse12;
      re4pLayC13 = re4pLay13;
      re4pAuseC14 = re4pAuse14;
      re4pLayC15 = re4pLay15;
      re4pAuseC16 = re4pAuse16;
      re4pLayC17 = re4pLay17;
      re4pAuseC18 = re4pAuse18;
      re4pLayC19 = re4pLay19;
      re4pAuseC20 = re4pAuse20;
      re4pLayC21 = re4pLay21;
      re4pAuseC22 = re4pAuse22;
      re4pLayC23 = re4pLay23;
      //릴레이4 재생변수에 녹화변수 대입 초기화 끝
    }
    Serial.println(playMod);
    playPushToNot = 0;
    playNotToPush = 0;
  }


  //레코드 모드 On 일 때 조작 부분
  if ((recordMod == 1) && (playMod == 0)) {
    iNput01 = digitalRead(buT01);
    iNput02 = digitalRead(buT02);
    iNput03 = digitalRead(buT03);
    iNput04 = digitalRead(buT04);

    //버튼1이 눌려있을 때
    if (iNput01 == HIGH) {
      digitalWrite(rElay01, HIGH);
      delay(10);

      //버튼1 눌려있는 것 녹화 시작
      if ((pAuse00 != 0) && (pAuse02 == 0)) {
        pLay01 = pLay01 + 1;
      }
      else if (pAuse04 == 0) {
        pLay03 = pLay03 + 1;
      }
      else if (pAuse06 == 0) {
        pLay05 = pLay05 + 1;
      }
      else if (pAuse08 == 0) {
        pLay07 = pLay07 + 1;
      }
      else if (pAuse10 == 0) {
        pLay09 = pLay09 + 1;
      }
      else if (pAuse12 == 0) {
        pLay11 = pLay11 + 1;
      }
      else if (pAuse14 == 0) {
        pLay13 = pLay13 + 1;
      }
      else if (pAuse16 == 0) {
        pLay15 = pLay15 + 1;
      }
      else if (pAuse18 == 0) {
        pLay17 = pLay17 + 1;
      }
      else if (pAuse20 == 0) {
        pLay19 = pLay19 + 1;
      }
      else if (pAuse22 == 0) {
        pLay21 = pLay21 + 1;
      }
      else {
        pLay23 = pLay23 + 1;
      }
      //버튼1 눌려있는 것 녹화 끝
    }
    //버튼1이 띄워져 있을 때
    else {
      digitalWrite(rElay01, LOW);
      delay(10);

      //버튼 1 띄워져 있는 것 녹화 시작
      if (pLay01 == 0) {
        pAuse00 = pAuse00 + 1;
      }
      else if (pLay03 == 0) {
        pAuse02 = pAuse02 + 1;
      }
      else if (pLay05 == 0) {
        pAuse04 = pAuse04 + 1;
      }
      else if (pLay07 == 0) {
        pAuse06 = pAuse06 + 1;
      }
      else if (pLay09 == 0) {
        pAuse08 = pAuse08 + 1;
      }
      else if (pLay11 == 0) {
        pAuse10 = pAuse10 + 1;
      }
      else if (pLay13 == 0) {
        pAuse12 = pAuse12 + 1;
      }
      else if (pLay15 == 0) {
        pAuse14 = pAuse14 + 1;
      }
      else if (pLay17 == 0) {
        pAuse16 = pAuse16 + 1;
      }
      else if (pLay19 == 0) {
        pAuse18 = pAuse18 + 1;
      }
      else if (pLay21 == 0) {
        pAuse20 = pAuse20 + 1;
      }
      else if (pLay23 == 0) {
        pAuse22 = pAuse22 + 1;
      }
      //버튼 1 띄워져 있는 것 녹화 끝
    }

    //버튼2가 눌려있을 때
    if (iNput02 == HIGH) {
      digitalWrite(rElay02, HIGH);

      //버튼2 눌려있는 것 녹화 시작
      if ((re2pAuse00 != 0) && (re2pAuse02 == 0)) {
        re2pLay01 = re2pLay01 + 1;
      }
      else if (re2pAuse04 == 0) {
        re2pLay03 = re2pLay03 + 1;
      }
      else if (re2pAuse06 == 0) {
        re2pLay05 = re2pLay05 + 1;
      }
      else if (re2pAuse08 == 0) {
        re2pLay07 = re2pLay07 + 1;
      }
      else if (re2pAuse10 == 0) {
        re2pLay09 = re2pLay09 + 1;
      }
      else if (re2pAuse12 == 0) {
        re2pLay11 = re2pLay11 + 1;
      }
      else if (re2pAuse14 == 0) {
        re2pLay13 = re2pLay13 + 1;
      }
      else if (re2pAuse16 == 0) {
        re2pLay15 = re2pLay15 + 1;
      }
      else if (re2pAuse18 == 0) {
        re2pLay17 = re2pLay17 + 1;
      }
      else if (re2pAuse20 == 0) {
        re2pLay19 = re2pLay19 + 1;
      }
      else if (re2pAuse22 == 0) {
        re2pLay21 = re2pLay21 + 1;
      }
      else {
        re2pLay23 = re2pLay23 + 1;
      }
      //버튼2 눌려있는 것 녹화 끝
    }
    //버튼2가 띄워져 있을 때
    else {
      digitalWrite(rElay02, LOW);
      delay(10);

      //버튼2 띄워져 있는 것 녹화 시작
      if (re2pLay01 == 0) {
        re2pAuse00 = re2pAuse00 + 1;
      }
      else if (re2pLay03 == 0) {
        re2pAuse02 = re2pAuse02 + 1;
      }
      else if (re2pLay05 == 0) {
        re2pAuse04 = re2pAuse04 + 1;
      }
      else if (re2pLay07 == 0) {
        re2pAuse06 = re2pAuse06 + 1;
      }
      else if (re2pLay09 == 0) {
        re2pAuse08 = re2pAuse08 + 1;
      }
      else if (re2pLay11 == 0) {
        re2pAuse10 = re2pAuse10 + 1;
      }
      else if (re2pLay13 == 0) {
        re2pAuse12 = re2pAuse12 + 1;
      }
      else if (re2pLay15 == 0) {
        re2pAuse14 = re2pAuse14 + 1;
      }
      else if (re2pLay17 == 0) {
        re2pAuse16 = re2pAuse16 + 1;
      }
      else if (re2pLay19 == 0) {
        re2pAuse18 = re2pAuse18 + 1;
      }
      else if (re2pLay21 == 0) {
        re2pAuse20 = re2pAuse20 + 1;
      }
      else if (re2pLay23 == 0) {
        re2pAuse22 = re2pAuse22 + 1;
      }
      //버튼2 띄워져 있는 것 녹화 끝
    }

    //버튼3가 눌러져 있을 때
    if (iNput03 == HIGH) {
      digitalWrite(rElay03, HIGH);
      delay(10);

      //버튼3 눌려있는 것 녹화 시작
      if ((re3pAuse00 != 0) && (re3pAuse02 == 0)) {
        re3pLay01 = re3pLay01 + 1;
      }
      else if (re3pAuse04 == 0) {
        re3pLay03 = re3pLay03 + 1;
      }
      else if (re3pAuse06 == 0) {
        re3pLay05 = re3pLay05 + 1;
      }
      else if (re3pAuse08 == 0) {
        re3pLay07 = re3pLay07 + 1;
      }
      else if (re3pAuse10 == 0) {
        re3pLay09 = re3pLay09 + 1;
      }
      else if (re3pAuse12 == 0) {
        re3pLay11 = re3pLay11 + 1;
      }
      else if (re3pAuse14 == 0) {
        re3pLay13 = re3pLay13 + 1;
      }
      else if (re3pAuse16 == 0) {
        re3pLay15 = re3pLay15 + 1;
      }
      else if (re3pAuse18 == 0) {
        re3pLay17 = re3pLay17 + 1;
      }
      else if (re3pAuse20 == 0) {
        re3pLay19 = re3pLay19 + 1;
      }
      else if (re3pAuse22 == 0) {
        re3pLay21 = re3pLay21 + 1;
      }
      else {
        re3pLay23 = re3pLay23 + 1;
      }
      //버튼3 눌려있는 것 녹화 끝
    }
    //버튼3가 띄워져 있을 때
    else {
      digitalWrite(rElay03, LOW);
      delay(10);

      //버튼3 띄워져 있는 것 녹화 시작
      if (re3pLay01 == 0) {
        re3pAuse00 = re3pAuse00 + 1;
      }
      else if (re3pLay03 == 0) {
        re3pAuse02 = re3pAuse02 + 1;
      }
      else if (re3pLay05 == 0) {
        re3pAuse04 = re3pAuse04 + 1;
      }
      else if (re3pLay07 == 0) {
        re3pAuse06 = re3pAuse06 + 1;
      }
      else if (re3pLay09 == 0) {
        re3pAuse08 = re3pAuse08 + 1;
      }
      else if (re3pLay11 == 0) {
        re3pAuse10 = re3pAuse10 + 1;
      }
      else if (re3pLay13 == 0) {
        re3pAuse12 = re3pAuse12 + 1;
      }
      else if (re3pLay15 == 0) {
        re3pAuse14 = re3pAuse14 + 1;
      }
      else if (re3pLay17 == 0) {
        re3pAuse16 = re3pAuse16 + 1;
      }
      else if (re3pLay19 == 0) {
        re3pAuse18 = re3pAuse18 + 1;
      }
      else if (re3pLay21 == 0) {
        re3pAuse20 = re3pAuse20 + 1;
      }
      else if (re3pLay23 == 0) {
        re3pAuse22 = re3pAuse22 + 1;
      }
      //버튼3 띄워져 있는 것 녹화 끝
    }

    //버튼4가 눌러져 있을 때
    if (iNput04 == HIGH) {
      digitalWrite(rElay04, HIGH);
      delay(10);

      //버튼4 눌려있는 것 녹화 시작
      if ((re4pAuse00 != 0) && (re4pAuse02 == 0)) {
        re4pLay01 = re4pLay01 + 1;
      }
      else if (re4pAuse04 == 0) {
        re4pLay03 = re4pLay03 + 1;
      }
      else if (re4pAuse06 == 0) {
        re4pLay05 = re4pLay05 + 1;
      }
      else if (re4pAuse08 == 0) {
        re4pLay07 = re4pLay07 + 1;
      }
      else if (re4pAuse10 == 0) {
        re4pLay09 = re4pLay09 + 1;
      }
      else if (re4pAuse12 == 0) {
        re4pLay11 = re4pLay11 + 1;
      }
      else if (re4pAuse14 == 0) {
        re4pLay13 = re4pLay13 + 1;
      }
      else if (re4pAuse16 == 0) {
        re4pLay15 = re4pLay15 + 1;
      }
      else if (re4pAuse18 == 0) {
        re4pLay17 = re4pLay17 + 1;
      }
      else if (re4pAuse20 == 0) {
        re4pLay19 = re4pLay19 + 1;
      }
      else if (re4pAuse22 == 0) {
        re4pLay21 = re4pLay21 + 1;
      }
      else {
        re4pLay23 = re4pLay23 + 1;
      }
      //버튼4 눌려있는 것 녹화 끝
    }
    //버튼4가 띄워져 있을 때
    else {
      digitalWrite(rElay04, LOW);
      delay(10);
      
      //버튼4 띄워져 있는 것 녹화 시작
      if (re4pLay01 == 0) {
        re4pAuse00 = re4pAuse00 + 1;
      }
      else if (re4pLay03 == 0) {
        re4pAuse02 = re4pAuse02 + 1;
      }
      else if (re4pLay05 == 0) {
        re4pAuse04 = re4pAuse04 + 1;
      }
      else if (re4pLay07 == 0) {
        re4pAuse06 = re4pAuse06 + 1;
      }
      else if (re4pLay09 == 0) {
        re4pAuse08 = re4pAuse08 + 1;
      }
      else if (re4pLay11 == 0) {
        re4pAuse10 = re4pAuse10 + 1;
      }
      else if (re4pLay13 == 0) {
        re4pAuse12 = re4pAuse12 + 1;
      }
      else if (re4pLay15 == 0) {
        re4pAuse14 = re4pAuse14 + 1;
      }
      else if (re4pLay17 == 0) {
        re4pAuse16 = re4pAuse16 + 1;
      }
      else if (re4pLay19 == 0) {
        re4pAuse18 = re4pAuse18 + 1;
      }
      else if (re4pLay21 == 0) {
        re4pAuse20 = re4pAuse20 + 1;
      }
      else if (re4pLay23 == 0) {
        re4pAuse22 = re4pAuse22 + 1;
      }
      //버튼4 띄워져 있는 것 녹화 끝
    }

    /*
      Serial.print(iNput01);
      Serial.print(" ");
      Serial.print(iNput02);
      Serial.print(" ");
      Serial.print(iNput03);
      Serial.print(" ");
      Serial.println(iNput04);
    */
  }


  //재생 모드로 들어갔을 때
  if ((playMod == 1) && (recordMod == 0)) {
    //릴레이1 녹화 재생 관련 코드 시작
    if (pAuseC00 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC00 = pAuseC00 - 1;
      delay(8);
    }
    else if (pLayC01 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC01 = pLayC01 - 1;
      delay(8);
    }
    else if (pAuseC02 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC02 = pAuseC02 - 1;
      delay(8);
    }
    else if (pLayC03 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC03 = pLayC03 - 1;
      delay(8);
    }
    else if (pAuseC04 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC04 = pAuseC04 - 1;
      delay(8);
    }
    else if (pLayC05 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC05 = pLayC05 - 1;
      delay(8);
    }
    else if (pAuseC06 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC06 = pAuseC06 - 1;
      delay(8);
    }
    else if (pLayC07 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC07 = pLayC07 - 1;
      delay(8);
    }
    else if (pAuseC08 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC08 = pAuseC08 - 1;
      delay(8);
    }
    else if (pLayC09 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC09 = pLayC09 - 1;
      delay(8);
    }
    else if (pAuseC10 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC10 = pAuseC10 - 1;
      delay(8);
    }
    else if (pLayC11 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC11 = pLayC11 - 1;
      delay(8);
    }
    else if (pAuseC12 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC12 = pAuseC12 - 1;
      delay(8);
    }
    else if (pLayC13 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC13 = pLayC13 - 1;
      delay(8);
    }
    else if (pAuseC14 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC14 = pAuseC14 - 1;
      delay(8);
    }
    else if (pLayC15 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC15 = pLayC15 - 1;
      delay(8);
    }
    else if (pAuseC16 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC16 = pAuseC16 - 1;
      delay(8);
    }
    else if (pLayC17 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC17 = pLayC17 - 1;
      delay(8);
    }
    else if (pAuseC18 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC18 = pAuseC18 - 1;
      delay(8);
    }
    else if (pLayC19 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC19 = pLayC19 - 1;
      delay(8);
    }
    else if (pAuseC20 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC20 = pAuseC20 - 1;
      delay(8);
    }
    else if (pLayC21 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC21 = pLayC21 - 1;
      delay(8);
    }
    else if (pAuseC22 != 00) {
      digitalWrite(rElay01, LOW);
      pAuseC22 = pAuseC22 - 1;
      delay(8);
    }
    else if (pLayC23 != 00) {
      digitalWrite(rElay01, HIGH);
      pLayC23 = pLayC23 - 1;
      delay(8);
    }
    //릴레이1 녹화 재생 관련 코드 끝

    //릴레이2 녹화 재생 관련 코드 시작
    if (re2pAuseC00 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC00 = re2pAuseC00 - 1;
      delay(8);
    }
    else if (re2pLayC01 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC01 = re2pLayC01 - 1;
      delay(8);
    }
    else if (re2pAuseC02 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC02 = re2pAuseC02 - 1;
      delay(8);
    }
    else if (re2pLayC03 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC03 = re2pLayC03 - 1;
      delay(8);
    }
    else if (re2pAuseC04 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC04 = re2pAuseC04 - 1;
      delay(8);
    }
    else if (re2pLayC05 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC05 = re2pLayC05 - 1;
      delay(8);
    }
    else if (re2pAuseC06 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC06 = re2pAuseC06 - 1;
      delay(8);
    }
    else if (re2pLayC07 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC07 = re2pLayC07 - 1;
      delay(8);
    }
    else if (re2pAuseC08 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC08 = re2pAuseC08 - 1;
      delay(8);
    }
    else if (re2pLayC09 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC09 = re2pLayC09 - 1;
      delay(8);
    }
    else if (re2pAuseC10 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC10 = re2pAuseC10 - 1;
      delay(8);
    }
    else if (re2pLayC11 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC11 = re2pLayC11 - 1;
      delay(8);
    }
    else if (re2pAuseC12 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC12 = re2pAuseC12 - 1;
      delay(8);
    }
    else if (re2pLayC13 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC13 = re2pLayC13 - 1;
      delay(8);
    }
    else if (re2pAuseC14 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC14 = re2pAuseC14 - 1;
      delay(8);
    }
    else if (re2pLayC15 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC15 = re2pLayC15 - 1;
      delay(8);
    }
    else if (re2pAuseC16 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC16 = re2pAuseC16 - 1;
      delay(8);
    }
    else if (re2pLayC17 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC17 = re2pLayC17 - 1;
      delay(8);
    }
    else if (re2pAuseC18 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC18 = re2pAuseC18 - 1;
      delay(8);
    }
    else if (re2pLayC19 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC19 = re2pLayC19 - 1;
      delay(8);
    }
    else if (re2pAuseC20 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC20 = re2pAuseC20 - 1;
      delay(8);
    }
    else if (re2pLayC21 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC21 = re2pLayC21 - 1;
      delay(8);
    }
    else if (re2pAuseC22 != 00) {
      digitalWrite(rElay02, LOW);
      re2pAuseC22 = re2pAuseC22 - 1;
      delay(8);
    }
    else if (re2pLay23 != 00) {
      digitalWrite(rElay02, HIGH);
      re2pLayC23 = re2pLayC23 - 1;
      delay(8);
    }
    //릴레이2 녹화 재생 관련 코드 끝

    //릴레이3 녹화 재생 관련 코드 시작
    if (re3pAuseC00 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC00 = re3pAuseC00 - 1;
      delay(8);
    }
    else if (re3pLayC01 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC01 = re3pLayC01 - 1;
      delay(8);
    }
    else if (re3pAuseC02 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC02 = re3pAuseC02 - 1;
      delay(8);
    }
    else if (re3pLayC03 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC03 = re3pLayC03 - 1;
      delay(8);
    }
    else if (re3pAuseC04 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC04 = re3pAuseC04 - 1;
      delay(8);
    }
    else if (re3pLayC05 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC05 = re3pLayC05 - 1;
      delay(8);
    }
    else if (re3pAuseC06 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC06 = re3pAuseC06 - 1;
      delay(8);
    }
    else if (re3pLayC07 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC07 = re3pLayC07 - 1;
      delay(8);
    }
    else if (re3pAuseC08 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC08 = re3pAuseC08 - 1;
      delay(8);
    }
    else if (re3pLayC09 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC09 = re3pLayC09 - 1;
      delay(8);
    }
    else if (re3pAuseC10 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC10 = re3pAuseC10 - 1;
      delay(8);
    }
    else if (re3pLayC11 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC11 = re3pLayC11 - 1;
      delay(8);
    }
    else if (re3pAuseC12 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC12 = re3pAuseC12 - 1;
      delay(8);
    }
    else if (re3pLayC13 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC13 = re3pLayC13 - 1;
      delay(8);
    }
    else if (re3pAuseC14 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC14 = re3pAuseC14 - 1;
      delay(8);
    }
    else if (re3pLayC15 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC15 = re3pLayC15 - 1;
      delay(8);
    }
    else if (re3pAuseC16 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC16 = re3pAuseC16 - 1;
      delay(8);
    }
    else if (re3pLayC17 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC17 = re3pLayC17 - 1;
      delay(8);
    }
    else if (re3pAuseC18 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC18 = re3pAuseC18 - 1;
      delay(8);
    }
    else if (re3pLayC19 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC19 = re3pLayC19 - 1;
      delay(8);
    }
    else if (re3pAuseC20 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC20 = re3pAuseC20 - 1;
      delay(8);
    }
    else if (re3pLayC21 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC21 = re3pLayC21 - 1;
      delay(8);
    }
    else if (re3pAuseC22 != 00) {
      digitalWrite(rElay03, LOW);
      re3pAuseC22 = re3pAuseC22 - 1;
      delay(8);
    }
    else if (re3pLayC23 != 00) {
      digitalWrite(rElay03, HIGH);
      re3pLayC23 = re3pLayC23 - 1;
      delay(8);
    }
    //릴레이3 녹화 재생 관련 코드 끝

    //릴레이4 녹화 재생 관련 코드 시작
    if (re4pAuseC00 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC00 = re4pAuseC00 - 1;
      delay(8);
    }
    else if (re4pLayC01 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC01 = re4pLayC01 - 1;
      delay(8);
    }
    else if (re4pAuseC02 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC02 = re4pAuseC02 - 1;
      delay(8);
    }
    else if (re4pLayC03 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC03 = re4pLayC03 - 1;
      delay(8);
    }
    else if (re4pAuseC04 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC04 = re4pAuseC04 - 1;
      delay(8);
    }
    else if (re4pLayC05 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC05 = re4pLayC05 - 1;
      delay(8);
    }
    else if (re4pAuseC06 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC06 = re4pAuseC06 - 1;
      delay(8);
    }
    else if (re4pLayC07 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC07 = re4pLayC07 - 1;
      delay(8);
    }
    else if (re4pAuseC08 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC08 = re4pAuseC08 - 1;
      delay(8);
    }
    else if (re4pLayC09 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC09 = re4pLayC09 - 1;
      delay(8);
    }
    else if (re4pAuseC10 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC10 = re4pAuseC10 - 1;
      delay(8);
    }
    else if (re4pLayC11 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC11 = re4pLayC11 - 1;
      delay(8);
    }
    else if (re4pAuseC12 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC12 = re4pAuseC12 - 1;
      delay(8);
    }
    else if (re4pLayC13 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC13 = re4pLayC13 - 1;
      delay(8);
    }
    else if (re4pAuseC14 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC14 = re4pAuseC14 - 1;
      delay(8);
    }
    else if (re4pLayC15 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC15 = re4pLayC15 - 1;
      delay(8);
    }
    else if (re4pAuseC16 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC16 = re4pAuseC16 - 1;
      delay(8);
    }
    else if (re4pLayC17 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC17 = re4pLayC17 - 1;
      delay(8);
    }
    else if (re4pAuseC18 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC18 = re4pAuseC18 - 1;
      delay(8);
    }
    else if (re4pLayC19 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC19 = re4pLayC19 - 1;
      delay(8);
    }
    else if (re4pAuseC20 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC20 = re4pAuseC20 - 1;
      delay(8);
    }
    else if (re4pLayC21 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC21 = re4pLayC21 - 1;
      delay(8);
    }
    else if (re4pAuseC22 != 00) {
      digitalWrite(rElay04, LOW);
      re4pAuseC22 = re4pAuseC22 - 1;
      delay(8);
    }
    else if (re4pLayC23 != 00) {
      digitalWrite(rElay04, HIGH);
      re4pLayC23 = re4pLayC23 - 1;
      delay(8);
    }
    //릴레이4 녹화 재생 관련 코드 끝

    //릴레이1 녹화 실행 변수 전부 0 됐을 때, 녹화 실행 변수 재설정
    if ((pAuseC00==0)&&(pAuseC00==pLayC01) && (pAuseC00 == pAuseC02) &&(pAuseC00==pLayC03) && (pAuseC00 == pAuseC04) &&(pAuseC00==pLayC05) && (pAuseC00 == pAuseC06) &&(pAuseC00==pLayC07) && (pAuseC00 == pAuseC08) &&(pAuseC00==pLayC09) && (pAuseC00 == pAuseC10) &&(pAuseC00==pLayC11) && (pAuseC00 == pAuseC12) &&(pAuseC00==pLayC13) && (pAuseC00 == pAuseC14) &&(pAuseC00==pLayC15) && (pAuseC00 == pAuseC16) &&(pAuseC00==pLayC17) && (pAuseC00 == pAuseC18) &&(pAuseC00==pLayC19) && (pAuseC00 == pAuseC20) &&(pAuseC00==pLayC21) && (pAuseC00 == pAuseC22) &&(pAuseC00==pLayC23))
    {
      pAuseC00 = pAuse00;
      pLayC01 = pLay01;
      pAuseC02 = pAuse02;
      pLayC03 = pLay03;
      pAuseC04 = pAuse04;
      pLayC05 = pLay05;
      pAuseC06 = pAuse06;
      pLayC07 = pLay07;
      pAuseC08 = pAuse08;
      pLayC09 = pLay09;
      pAuseC10 = pAuse10;
      pLayC11 = pLay11;
      pAuseC12 = pAuse12;
      pLayC13 = pLay13;
      pAuseC14 = pAuse14;
      pLayC15 = pLay15;
      pAuseC16 = pAuse16;
      pLayC17 = pLay17;
      pAuseC18 = pAuse18;
      pLayC19 = pLay19;
      pAuseC20 = pAuse20;
      pLayC21 = pLay21;
      pAuseC22 = pAuse22;
      pLayC23 = pLay23;
    }
    //릴레이1 녹화 실행 변수 전부 0 됐을 때, 녹화 실행 변수 재설정 끝

    //릴레이2 녹화 실행 변수 전부 0 됐을 때, 녹화 실행 변수 재설정
    if ((re2pAuseC00==0)&&(re2pAuseC00==re2pLayC01) && (re2pAuseC00 == re2pAuseC02) &&(re2pAuseC00==re2pLayC03) && (re2pAuseC00 == re2pAuseC04) &&(re2pAuseC00==re2pLayC05) && (re2pAuseC00 == re2pAuseC06) &&(re2pAuseC00==re2pLayC07) && (re2pAuseC00 == re2pAuseC08) &&(re2pAuseC00==re2pLayC09) && (re2pAuseC00 == re2pAuseC10) &&(re2pAuseC00==re2pLayC11) && (re2pAuseC00 == re2pAuseC12) &&(re2pAuseC00==re2pLayC13) && (re2pAuseC00 == re2pAuseC14) &&(re2pAuseC00==re2pLayC15) && (re2pAuseC00 == re2pAuseC16) &&(re2pAuseC00==re2pLayC17) && (re2pAuseC00 == re2pAuseC18) &&(re2pAuseC00==re2pLayC19) && (re2pAuseC00 == re2pAuseC20) &&(re2pAuseC00==re2pLayC21) && (re2pAuseC00 == re2pAuseC22) &&(re2pAuseC00==re2pLayC23))
    {
      re2pAuseC00 = re2pAuse00;
      re2pLayC01 = re2pLay01;
      re2pAuseC02 = re2pAuse02;
      re2pLayC03 = re2pLay03;
      re2pAuseC04 = re2pAuse04;
      re2pLayC05 = re2pLay05;
      re2pAuseC06 = re2pAuse06;
      re2pLayC07 = re2pLay07;
      re2pAuseC08 = re2pAuse08;
      re2pLayC09 = re2pLay09;
      re2pAuseC10 = re2pAuse10;
      re2pLayC11 = re2pLay11;
      re2pAuseC12 = re2pAuse12;
      re2pLayC13 = re2pLay13;
      re2pAuseC14 = re2pAuse14;
      re2pLayC15 = re2pLay15;
      re2pAuseC16 = re2pAuse16;
      re2pLayC17 = re2pLay17;
      re2pAuseC18 = re2pAuse18;
      re2pLayC19 = re2pLay19;
      re2pAuseC20 = re2pAuse20;
      re2pLayC21 = re2pLay21;
      re2pAuseC22 = re2pAuse22;
      re2pLayC23 = re2pLay23;
    }
    //릴레이2 녹화 실행 변수 전부 0 됐을 때, 녹화 실행 변수 재설정 끝

    //릴레이3 녹화 실행 변수 전부 0 됐을 때, 녹화 실행 변수 재설정
    if ((re3pAuseC00==0)&&(re3pAuseC00==re3pLayC01) && (re3pAuseC00 == re3pAuseC02) &&(re3pAuseC00==re3pLayC03) && (re3pAuseC00 == re3pAuseC04) &&(re3pAuseC00==re3pLayC05) && (re3pAuseC00 == re3pAuseC06) &&(re3pAuseC00==re3pLayC07) && (re3pAuseC00 == re3pAuseC08) &&(re3pAuseC00==re3pLayC09) && (re3pAuseC00 == re3pAuseC10) &&(re3pAuseC00==re3pLayC11) && (re3pAuseC00 == re3pAuseC12) &&(re3pAuseC00==re3pLayC13) && (re3pAuseC00 == re3pAuseC14) &&(re3pAuseC00==re3pLayC15) && (re3pAuseC00 == re3pAuseC16) &&(re3pAuseC00==re3pLayC17) && (re3pAuseC00 == re3pAuseC18) &&(re3pAuseC00==re3pLayC19) && (re3pAuseC00 == re3pAuseC20) &&(re3pAuseC00==re3pLayC21) && (re3pAuseC00 == re3pAuseC22) &&(re3pAuseC00==re3pLayC23))
    {
      re3pAuseC00 = re3pAuse00;
      re3pLayC01 = re3pLay01;
      re3pAuseC02 = re3pAuse02;
      re3pLayC03 = re3pLay03;
      re3pAuseC04 = re3pAuse04;
      re3pLayC05 = re3pLay05;
      re3pAuseC06 = re3pAuse06;
      re3pLayC07 = re3pLay07;
      re3pAuseC08 = re3pAuse08;
      re3pLayC09 = re3pLay09;
      re3pAuseC10 = re3pAuse10;
      re3pLayC11 = re3pLay11;
      re3pAuseC12 = re3pAuse12;
      re3pLayC13 = re3pLay13;
      re3pAuseC14 = re3pAuse14;
      re3pLayC15 = re3pLay15;
      re3pAuseC16 = re3pAuse16;
      re3pLayC17 = re3pLay17;
      re3pAuseC18 = re3pAuse18;
      re3pLayC19 = re3pLay19;
      re3pAuseC20 = re3pAuse20;
      re3pLayC21 = re3pLay21;
      re3pAuseC22 = re3pAuse22;
      re3pLayC23 = re3pLay23; 
    }
    //릴레이3 녹화 실행 변수 전부 0 됐을 때, 녹화 실행 변수 재설정 끝

    //릴레이4 녹화 실행 변수 전부 0 됐을 때, 녹화 실행 변수 재설정
    if ((re4pAuseC00==0)&&(re4pAuseC00==re4pLayC01) && (re4pAuseC00 == re4pAuseC02) &&(re4pAuseC00==re4pLayC03) && (re4pAuseC00 == re4pAuseC04) &&(re4pAuseC00==re4pLayC05) && (re4pAuseC00 == re4pAuseC06) &&(re4pAuseC00==re4pLayC07) && (re4pAuseC00 == re4pAuseC08) &&(re4pAuseC00==re4pLayC09) && (re4pAuseC00 == re4pAuseC10) &&(re4pAuseC00==re4pLayC11) && (re4pAuseC00 == re4pAuseC12) &&(re4pAuseC00==re4pLayC13) && (re4pAuseC00 == re4pAuseC14) &&(re4pAuseC00==re4pLayC15) && (re4pAuseC00 == re4pAuseC16) &&(re4pAuseC00==re4pLayC17) && (re4pAuseC00 == re4pAuseC18) &&(re4pAuseC00==re4pLayC19) && (re4pAuseC00 == re4pAuseC20) &&(re4pAuseC00==re4pLayC21) && (re4pAuseC00 == re4pAuseC22) &&(re4pAuseC00==re4pLayC23))
    {
      re4pAuseC00 = re4pAuse00;
      re4pLayC01 = re4pLay01;
      re4pAuseC02 = re4pAuse02;
      re4pLayC03 = re4pLay03;
      re4pAuseC04 = re4pAuse04;
      re4pLayC05 = re4pLay05;
      re4pAuseC06 = re4pAuse06;
      re4pLayC07 = re4pLay07;
      re4pAuseC08 = re4pAuse08;
      re4pLayC09 = re4pLay09;
      re4pAuseC10 = re4pAuse10;
      re4pLayC11 = re4pLay11;
      re4pAuseC12 = re4pAuse12;
      re4pLayC13 = re4pLay13;
      re4pAuseC14 = re4pAuse14;
      re4pLayC15 = re4pLay15;
      re4pAuseC16 = re4pAuse16;
      re4pLayC17 = re4pLay17;
      re4pAuseC18 = re4pAuse18;
      re4pLayC19 = re4pLay19;
      re4pAuseC20 = re4pAuse20;
      re4pLayC21 = re4pLay21;
      re4pAuseC22 = re4pAuse22;
      re4pLayC23 = re4pLay23; 
    }
    //릴레이4 녹화 실행 변수 전부 0 됐을 때, 녹화 실행 변수 재설정 끝
  }
}
