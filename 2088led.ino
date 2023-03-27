const byte colPins[4] = {9, 8, 7, 6};     // 設定「行」腳位
const byte rowPins[4] = {13, 12, 11, 10}; // 設定「列」腳位
const char keymap[4][4] = {     // 設定按鍵的「行、列」代表值
    {'1','2','3','A'}, 
    {'4','5','6','B'}, 
    {'7','8','9','C'},
    {'*','0','#','D'}
};

byte i, j;      // 暫存迴圈的索引數字
byte scanVal;   // 暫存掃描到的按鍵值

int t_delay_ms=0;
  
void setup() {
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  digitalWrite(22, HIGH);
  digitalWrite(24, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(28, HIGH);
  digitalWrite(30, HIGH);
  digitalWrite(32, HIGH);
  digitalWrite(34, HIGH);
  digitalWrite(36, HIGH);
  // 間格
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(37, HIGH);

  Serial.begin(9600);
  
  for (i=0; i <= 3; i++) {
    pinMode(rowPins[i], INPUT);
    pinMode(colPins[i], OUTPUT);
    digitalWrite(colPins[i], HIGH);
    digitalWrite(rowPins[i], HIGH);
  }
  
  t_delay_ms=1;  
}

void loop() {
  for (i = 0; i <= 3; i++) {
    for (j = 0; j <= 3; j++) {
      digitalWrite(colPins[j], LOW);
      scanVal = digitalRead(rowPins[i]);

      if (scanVal == LOW) {    // 如果輸入值是「低電位」…
        Serial.println(keymap[i][j]);  // 輸出按鍵代表的字元
        delay(200);  // 掃描按鍵的間隔時間
        digitalWrite(colPins[j], HIGH);
        break;       // 跳出迴圈
      }
      digitalWrite(colPins[j], HIGH);
      if (keymap[i][j] == '2') {
        love;
        }
    }
  } 
   
}

void love() {
  //======= Line 1 ==========
  digitalWrite(22, LOW);
  digitalWrite(27, LOW);
  digitalWrite(29, LOW);
  delay(t_delay_ms); 
  digitalWrite(22, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);  

  //======= Line 2 ==========  
  digitalWrite(24, LOW);
  digitalWrite(25, LOW);
  digitalWrite(31, LOW);
  delay(t_delay_ms);   
  digitalWrite(24, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(31, HIGH);
  
  //======= Line 3 ==========  
  digitalWrite(26, LOW);
  digitalWrite(23, LOW);
  digitalWrite(33, LOW);
  delay(t_delay_ms);   
  digitalWrite(26, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(33, HIGH);  
  
  //======= Line 4 ==========  
  digitalWrite(28, LOW);
  digitalWrite(25, LOW);
  digitalWrite(35, LOW);
  delay(t_delay_ms);   
  digitalWrite(28, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(35, HIGH);  

  
  //======= Line 5 ==========  
  digitalWrite(30, LOW);
  digitalWrite(25, LOW);
  digitalWrite(37, LOW);
  delay(t_delay_ms);   
  digitalWrite(30, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(37, HIGH);  
  
  //======= Line 6 ==========  
  digitalWrite(32, LOW);
  digitalWrite(23, LOW);
  digitalWrite(35, LOW);
  delay(t_delay_ms);   
  digitalWrite(32, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(35, HIGH);  

  
  //======= Line 7 ==========  
  digitalWrite(34, LOW);
  digitalWrite(25, LOW);
  digitalWrite(33, LOW);
  delay(t_delay_ms);   
  digitalWrite(34, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(33, HIGH);  

  
  //======= Line 8 ==========  
  digitalWrite(36, LOW);
  digitalWrite(27, LOW);
  digitalWrite(29, LOW);
  digitalWrite(31, LOW); 
  delay(t_delay_ms);   
  digitalWrite(36, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);  
  digitalWrite(31, HIGH); 
  }
