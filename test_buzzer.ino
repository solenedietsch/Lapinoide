
/*
Adafruit Arduino - Lesson 10. Simple Sounds
*/
int speakerPin = 12;
int sound = 1; 
int tone1 = 3;
//int numTones = 10;
int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
//            mid C  C#   D    D#   E    F    F#   G    G#   A
 
void setup()
{
}
 
void loop()
{
  if(sound == 1){
    tone(speakerPin,tones[4]);
    delay(100);
    sound = 0;
  }
  noTone(speakerPin);
  delay(1000);
  sound = 1;
}
