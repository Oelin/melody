int LED = 6;
long SECOND = 1000000;
long NOTE_TIME = SECOND / 16;


float C = 32.7032;
float CS = 34.6478;
float D = 36.7032;
float DS = 38.8909;
float E = 41.2034;
float F = 43.6535;
float FS = 46.2493;
float G = 48.9994;
float GS = 51.9131;
float A = 55.0;
float AS = 58.2705;
float B = 61.7354;


void setup() {
  pinMode(LED, OUTPUT);
}


void sleep(long time) {
  if (time >= 16000)
    delay((int) (time / 1000));
  else
    delayMicroseconds(time);
}


void play(float freq) {
  long rest = round((float) SECOND / freq);
  
  for (long i=0; i < NOTE_TIME; i += 2*rest) {
    digitalWrite(LED, HIGH);
    sleep(rest);
    digitalWrite(LED, LOW);
    sleep(rest);
  }
}


// song notes
// moonlight sonata

// use timing 1/4
//float notes[] = {
//  C*8,  F*8,  GS*8, 
//  C*8,  F*8,  GS*8, 
//  C*8,  F*8,  GS*8, 
//  C*8,  F*8,  GS*8,
//  
//  C*8,  F*8,  GS*8, 
//  C*8,  F*8,  GS*8, 
//  C*8,  F*8,  GS*8, 
//  C*8,  F*8,  GS*8,
//  
//  CS*8, F*8,  GS*8,
//  CS*8, F*8,  GS*8, 
//  CS*8, FS*8, AS*8, 
//  CS*8, FS*8, AS*8,
//  
//  C*8,  F*8,  GS*8,
//  C*8,  F*8,  GS*8, 
//  C*8,  F*8,  G*8, 
//  AS*4, E*8,  G*8,
//  
//  F*4,  GS*4, C*8,  GS*4,  C*8,  F*8,
//  
//  C*8,  F*8,  GS*8,
//  C*32, C*8,  C*32, C*32, C*8,  GS*8,
//  AS*16,G*8,  AS*8, C*8,  G*8,  AS*8,
//  
//  C*32, C*8,  C*32, C*32, C*8,  GS*8,
//  GS*16,F*8,  GS*8, C*8,  F*8,  GS*8,
//};


// use timing 1/16
//int notes[] = {
//  C*4, C*4, C*4, C*4, C*4.5, C*5, C*5.5, C*6, C*6.5, C*7, C*7.5,
//  C*8, C*8.5, C*9, C*9.5, C*10.4, C*11, C*11.6, C*12.4, C*13.5, C*14.5, C*15,
//  
//  C*16, C*16, C*16, C*16, C*16, C*16, C*16, C*16,
//  DS*16, DS*16, DS*16, DS*16, C*16, C*16, C*16, C*16,
//};

//float notes[] = {
//  C*8, C*8, DS*8, DS*8, G*4, DS*8, DS*8,
//  C*8, C*8, DS*8, DS*8, G*4, G*4, DS*8, DS*8, D*8,
//
//  C*8, C*8, DS*8, DS*8, G*4, DS*8, DS*8,
//  C*8, C*8, DS*8, DS*8, G*4, G*4, DS*8, DS*8, E*8,
//
//  F*8, F*8, GS*8, GS*8, C*8, GS*8, GS*8,
//  F*8, F*8, GS*8, GS*8, C*8, C*8, GS*8, GS*8, G*8,
//
//  G*8, G*8, AS*8, AS*8, E*8, AS*8, AS*8,
//  G*8, G*8, AS*8, AS*8, E*8, E*8, AS*8, AS*8, A*8,
//};



float notes[] = {
  A*8, A*4, F*8, A*8, A*4, E*8, A*8, A*4,
  A*8, A*4, F*8, A*8, A*4, E*8, A*8, A*4,
  A*8, A*4, F*8, A*8, A*4, E*8, A*8, A*4,  
  A*8, A*4, F*8, A*8, A*4, E*8, A*8, A*4,  
  
  C*16, A*4, F*8, C*16, A*4, E*8, B*8, A*4,
  C*16, A*4, F*8, C*16, A*4, E*8, B*8, A*4,
  C*16, A*4, F*8, C*16, A*4, E*8, B*8, A*4,  
  C*16, A*4, F*8, C*16, A*4, E*8, B*8, A*4,

  
  A*8, F*8, E*8, A*8, C*16, F*8, E*8, A*8,
  A*4, A*4, A*8, A*8, E*8, C*8, F*8, F*16,
  A*8, F*8, E*8, A*8, C*16, F*8, E*8, A*8,
  A*4, A*4, A*8, A*8, E*8, C*8, F*8, F*16,
  

  A*4, A*4, A*4, A*4, AS*8, AS*8, AS*8, AS*8,
  A*2, A*2, A*4, A*4, AS*2, AS*2, AS*8, AS*8,
  D*8, D*8, D*8, D*8, DS*8, DS*8, DS*8, DS*8,
  D*8, D*8, D*8, D*8, DS*8, DS*8, DS*8, DS*8,

  A*8, A*8, A*8, A*8, AS*16, AS*16, AS*16, AS*16,
  A*4, A*4, A*8, A*8, AS*4, AS*4, AS*16, AS*16,
  F*8, F*8, C*16, A*16, F*8, F*8, C*16, A*16,
  E*8, E*8, C*16, G*16, E*8, E*8, C*16, G*16,
};


float solo[] = {
  F*4,  GS*4, C*8,
  GS*4,  C*8,  F*8,
  C*8,  F*8,  GS*8,
};


void loop() { 
  for (int n=0; n < sizeof(notes)/sizeof(float); n++) {
    play(notes[n]);
  }
}
