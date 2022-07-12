#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.H>
#define TFT_CS  5
#define TFT_DC 21
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
//nešto
// tipke i srce
int TipkaLR = 34;
int TipkaUD = 35;
int StanjeTipkala;
int StanjeTipkalaUD;
   
   
  
// Tijelo i glava
int X = 20;
int Y = 110;
int Xglava = 33;
int Yglava = 102;
int Xoko = 38;
int Yoko = 105;
int Xusta1 = 41;
int Yusta1 = 111;
int Xusta2 = 40;
int Yusta2 = 110;
int Xkapa1 = 29;
int Ykapa1 = 101;
int Xkapa2 = 35;
int Ykapa2 = 95;
int Xnoga1 = 20;
int Ynoga1 = 130;
int Xnoga2 = 36.5;
int Ynoga2 = 130;
int Xrep = 10;
int Yrep = 113;
int Xtrokut11 = 26;
int Ytrokut11 = 109.5;
int Xtrokut12 = 29;
int Ytrokut12 = 106.5;
int Xtrokut13 = 32;
int Ytrokut13 = 109.5;
int Xtrokut21 = 21;
int Ytrokut21 = 109.5;
int Xtrokut22 = 24;
int Ytrokut22 = 106.5;
int Xtrokut23 = 27;
int Ytrokut23 = 109.5;
int Xtrokut31 = 13;
int Ytrokut31 = 112;
int Xtrokut32 = 16;
int Ytrokut32 = 109;
int Xtrokut33 = 19;
int Ytrokut33 = 112;
// mrdanje

int move_bodyXP (){
  X = X + 20;
  Xglava =  Xglava + 20;
  Xoko = Xoko + 20;
  Xusta1 = Xusta1 + 20;
  Xusta2 + 20;
  Xkapa1 + 20;
  Xkapa2 + 20;
  Xnoga1 + 20;
  Xnoga2 + 20;
  Xrep + 20;
  Xtrokut11 + 20; 
  Xtrokut12 + 20;
  Xtrokut13 + 20;
  Xtrokut21 + 20;
  Xtrokut22 + 20;
  Xtrokut23 + 20;
  Xtrokut31 + 20;
  Xtrokut32 + 20;
  Xtrokut33 + 20;
  delay(200);
}
int move_bodyXM (){
  X = X - 20;
  Xglava =  Xglava - 20;
  Xoko = Xoko - 20;
  Xusta1 = Xusta1 - 20;
  Xusta2 - 20;
  Xkapa1 - 20;
  Xkapa2 - 20;
  Xnoga1 - 20;
  Xnoga2 - 20;
  Xrep - 20;
  Xtrokut11 - 20; 
  Xtrokut12 - 20;
  Xtrokut13 - 20;
  Xtrokut21 - 20;
  Xtrokut22 - 20;
  Xtrokut23 - 20;
  Xtrokut31 - 20;
  Xtrokut32 - 20;
  Xtrokut33 - 20;
  delay(200);
}
int move_bodyYP (){
  Y = Y + 20;
  Yglava =  Yglava + 20;
  Yoko = Yoko + 20;
  Yusta1 + 20;
  Yusta2 + 20;
  Ykapa1 + 20;
  Ykapa2 + 20;
  Ynoga1 + 20;
  Ynoga2 + 20;
  Yrep + 20;
  Ytrokut11 + 20;
  Ytrokut12 + 20;
  Ytrokut13 + 20;
  Ytrokut21 + 20;
  Ytrokut22 + 20;
  Ytrokut23 + 20;
  Ytrokut31 + 20;
  Ytrokut32 + 20;
  Ytrokut33 + 20;
}
int move_bodyYM (){
  Y = Y - 20; 
  Yglava =  Yglava - 20;
  Yoko = Yoko - 20;
  Yusta1 - 20;
  Yusta2 - 20;
  Ykapa1 - 20;
  Ykapa2 - 20;
  Ynoga1 - 20;
  Ynoga2 - 20;
  Yrep - 20;
  Ytrokut11 - 20;
  Ytrokut12 - 20;
  Ytrokut13 - 20;
  Ytrokut21 - 20;
  Ytrokut22 - 20;
  Ytrokut23 - 20;
  Ytrokut31 - 20;
  Ytrokut32 - 20;
  Ytrokut33 - 20;
}
void setup() {
  
  pinMode(TipkaLR, INPUT_PULLUP);
  pinMode(TipkaUD, INPUT_PULLUP);
  Serial.begin (9600);

  
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  
  //character dinosaur
  tft.setTextSize(5);
  tft.setRotation(3);
  
  //tijelo i glava
  tft.fillRect(X, Y, 20, 20, ILI9341_GREEN); 
  tft.fillRect(Xglava, Yglava, 12, 12, ILI9341_GREEN);
  
  //oko i usta
  tft.fillRect(Xoko, Yoko, 2, 2, ILI9341_BLACK);
  tft.drawLine(Xusta1, Yusta1, 45, 111, ILI9341_BLACK);
  tft.fillRect(Xusta2, Yusta2, 1.5, 1, ILI9341_BLACK);
  
  //kapa
  tft.drawLine(Xkapa1, Ykapa1, 44, 101, ILI9341_RED);
  tft.fillRect(Xkapa2, Ykapa2, 10, 7.5, ILI9341_RED);
 
  //noge
  tft.fillRect(Xnoga1, Ynoga1, 5, 5, ILI9341_GREEN);
  tft.fillRect(Xnoga2, Ynoga2, 5, 5, ILI9341_GREEN);
 
  //rep
  tft.fillRect(Xrep, Yrep, 11, 4.5, ILI9341_GREEN);
  
  //bodlje na leđima
  tft.drawTriangle(Xtrokut1.1, Ytrokut1.1, Xtrokut1.2, Ytrokut1.2, Xtrokut1.3, Ytrokut1.3, ILI9341_WHITE);
  tft.drawTriangle(Xtrokut2.1, Ytrokut2.1, Xtrokut2.2, Ytrokut2.2, Xtrokut2.3, Ytrokut2.3, ILI9341_WHITE);
  tft.drawTriangle(Xtrokut3.1, Ytrokut3.1, Xtrokut3.2, Ytrokut3.2, Xtrokut3.3, Ytrokut3.3, ILI9341_WHITE);
}

void loop() {
// Kretanje
StanjeTipkala = analogRead(TipkaLR);
Serial.println (StanjeTipkala);
Serial.println  (StanjeTipkalaUD);
if (StanjeTipkala >= 1300 and StanjeTipkala <= 2100){
  move_bodyXP();
}
StanjeTipkalaUD = analogRead(TipkaUD);
if (StanjeTipkala == 4095){
  move_bodyXM ();
  }
if (StanjeTipkalaUD >= 1300 and StanjeTipkalaUD <= 2100){
    move_bodyYP ();
    }
    StanjeTipkalaUD = analogRead(TipkaUD);
if (StanjeTipkalaUD == 4095){
    move_bodyYM ();
  }
}
