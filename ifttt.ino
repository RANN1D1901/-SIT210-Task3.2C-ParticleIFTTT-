double sun=0.0;
int seconds=0;
int i=0;
int led1 = D7; 
void setup() {
    
    Particle.variable("sun",sun);
    Particle.variable("seconds",seconds);
    pinMode(led1, OUTPUT);

}


void loop() {
    for(int i=0;i<=1000;i++)
    {
        sun=double(random(0,255));
        if(sun>20)
        {
            digitalWrite(led1, HIGH);
              delay(20);
            
            
              digitalWrite(led1, LOW);
              delay(20);
              break;
            
        }
        seconds=seconds+1;
    
        delay(100);
    }

}

 


  