#include <SD.h> // need to include the SD library
#define SD_ChipSelectPin 9 //connect pin 4 of arduino to cs pin of sd card
#include <TMRpcm.h> //Arduino library for asynchronous playback of PCM/WAV files
#include <SPI.h> //  need to include the SPI library

TMRpcm tmrpcm; // create an object for use in this sketch
int temp=1;
int pp=5;
int b1 = A5;
int b2 = 8;
int b3 = 7;
int b4 = 6;
int b5 = 5;
int b6 = 4;
int b7 = 10;
int b8 = 2;
int b9 = A0;
int b10 = A2;
int b11 = A3;
int b12 = A4;
void setup()
{ 
 pinMode(pp,INPUT_PULLUP);
 pinMode(b1,INPUT_PULLUP);
 pinMode(b2,INPUT_PULLUP);
 pinMode(b3,INPUT_PULLUP);
 pinMode(b4,INPUT_PULLUP);
 pinMode(b5,INPUT_PULLUP);
 pinMode(b6,INPUT_PULLUP);
 pinMode(b7,INPUT_PULLUP);
 pinMode(b8,INPUT_PULLUP);
 pinMode(b9,INPUT_PULLUP);
 pinMode(b10,INPUT_PULLUP);
 pinMode(b11,INPUT_PULLUP);
 pinMode(b12,INPUT_PULLUP);

 
 tmrpcm.speakerPin = 9; //5,6,11 or 46 on Mega, 9 on Uno, Nano, etc
 Serial.begin(9600);
 if (!SD.begin(SD_ChipSelectPin)) // returns 1 if the card is present
 {
  Serial.println("SD fail");
  return;
 }

 tmrpcm.setVolume(5); //
 tmrpcm.play("song1.wav"); //the sound file "song" will play each time the arduino powers up, or is reset
                          //try to provide the file name with extension
                     
}


void loop()
{  
  while(digitalRead(pp)==0 || digitalRead(b1)==0 || digitalRead(b2)==0
  || digitalRead(b3)==0 || digitalRead(b4)==0 || digitalRead(b5)==0 || digitalRead(b6)==0
  || digitalRead(b7)==0 || digitalRead(b8)==0 || digitalRead(b9)==0 || digitalRead(b10)==0
  || digitalRead(b11)==0 || digitalRead(b12)==0)
  {
    if(digitalRead(pp)==0)
    {
      tmrpcm.pause();
      while(digitalRead(pp)==0);
      delay(200);
    }
    else if(digitalRead(b1)==0)
    {
      if(temp<12)//temp should be lesser than no. of songs 
      temp=1;
      while(digitalRead(b1)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b2)==0)
    {
      if(temp>12)
      temp=2;
      while(digitalRead(b2)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b3)==0)
    {
      if(temp>12)
      temp=3;
      while(digitalRead(b3)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b4)==0)
    {
      if(temp>12)
      temp=4;
      while(digitalRead(b4)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b5)==0)
    {
      if(temp>12)
      temp=5;
      while(digitalRead(b5)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b6)==0)
    {
      if(temp>12)
      temp=6;
      while(digitalRead(b6)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b7)==0)
    {
      if(temp>12)
      temp=7;
      while(digitalRead(b7)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b8)==0)
    {
      if(temp>12)
      temp=8;
      while(digitalRead(b8)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b9)==0)
    {
      if(temp>12)
      temp=9;
      while(digitalRead(b9)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b10)==0)
    {
      if(temp>12)
      temp=10;
      while(digitalRead(b10)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b11)==0)
    {
      if(temp>12)
      temp=11;
      while(digitalRead(b11)==0);
      delay(200);
      song();
    }
    else if(digitalRead(b12)==0)
    {
      if(temp>12)
      temp=12;
      while(digitalRead(b12)==0);
      delay(200);
      song();
    }
  }
}

void song (void)
{
  if(temp==1)
  {
    tmrpcm.play("Song1.wav");  
  }
  else if(temp==2)
  {
    tmrpcm.play("Song2.wav");  
  }
  else if(temp==3)
  {
    tmrpcm.play("Song3.wav");  
  }
  else if(temp==4)
  {
    tmrpcm.play("Song4.wav");  
  }
  else if(temp==5)
  {
    tmrpcm.play("Song5.wav");  
  }
  else if(temp==6)
  {
    tmrpcm.play("Song6.wav");  
  }
  else if(temp==7)
  {
    tmrpcm.play("Song7.wav");  
  }
  else if(temp==8)
  {
    tmrpcm.play("Song8.wav");  
  }
  else if(temp==9)
  {
    tmrpcm.play("Song9.wav");  
  }
  else if(temp==10)
  {
    tmrpcm.play("Song10.wav");  
  }
  else if(temp==11)
  {
    tmrpcm.play("Song11.wav");  
  }
  else if(temp==12)
  {
    tmrpcm.play("Song12.wav");  
  }
}
