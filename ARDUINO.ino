//DESI NOVITA SARI
//XI TKJ1
void setup() {
  // put your setup code here, to run once:
 //Memberi target pin uotput yang digunakan
 pinMode (10,OUTPUT) ;
}

void loop() {
  //Memberi perulangan
digitalWrite (10,HIGH); //pada pin 10, LED menyala
delay(5000); //Tunda 2 sec pada saat nyala
digitalWrite(10,LOW); //Pada pin 10, LED mati
delay(5000); //Tunda 2 sec pada saat mati
}
