//Tuncer Yılmaz--Arduino UNO ile-KY-032 Kızılötesi sensör ile mesafe hesaplama

#include <LiquidCrystal.h> //LCD kütüphanesini kodumuza dahil ediyoruz

//Bağladığımız pinlere göre tanımlamalarımızı yapıyoruz
int bluee = 9;
int redd = 11;
int greenn  = 10;





LiquidCrystal lcd(7, 6, 5, 4, 3, 2); //LCD pinlerini tanımlıyoruz


void setup() 
{
  
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(redd, OUTPUT); //
  pinMode(bluee, OUTPUT);
  pinMode(greenn, OUTPUT);
  
  
  
}

void loop() {
 
  
  
  
  Serial.print("  ");
  
  lcd.print("  ");
  
  
  lcd.setCursor(0, 0);
  delay(1000); //1000 milisaniye bekle
  // değerleri 1 saniye boyunca ekranda göreceğiz
  
  
  lcd.clear(); //Ekranı temizle
  delay(150); //150 milisaniye bekle
  //----------------------------------------------------------------------
  

   //
  {
    
    digitalWrite(bluee,HIGH);
    Serial.print("MAVİ yanıyor");
    lcd.print("MAVI YANIYOR");
    
    delay(2500);
    digitalWrite(bluee,LOW);
    lcd.clear();
    digitalWrite(greenn,HIGH);
    Serial.print("Yeşil yanıyor");
    lcd.print("YESİL YANIYOR");
    delay(2500);
    digitalWrite(greenn,LOW);
    lcd.clear();
    digitalWrite(redd,HIGH);
    Serial.print("Kırmızı yanıyor");
    lcd.setCursor(0, 0);   //İmleci 1. sütuna al .birinci değer sütun
    lcd.print("KIRMIZI YANIYOR");
    delay(2500);
    digitalWrite(redd,LOW);
    lcd.clear();
    lcd.setCursor(0, 1);   //İmleci 1. sütuna al .birinci değer sütun
 
    delay(1000);
  } 
 
    
    Serial.println(""); //Belirlediğimiz kıstaslara uymayan diğer değerler
    lcd.setCursor(0, 0);   //İmleci 1. sütun 1.satıra al .birinci değer sütun ikinci değer satır
    
    lcd.setCursor(0, 1); //İmleci 2. satır 1. sütuna al
    
    delay(1000);
  
   

  
  Serial.println(); //Serial monitörde bir satır aşağı geç
  delay(1000); //1000 milisaniye bekle
  lcd.clear(); //LCD ekranı temizle
  delay(1000);

}
