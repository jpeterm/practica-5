#define buz 9
#define led 10

const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6; 
const int f = 7;
const int g = 8;

const int D = 7;
const int SEGMENTOS[D] = {a,b,c,d,e,f,g};
 
const int DIGITOS[10][D] = {
  
  /*9*/ {1,1,1,1,0,1,1},
  /*8*/ {1,1,1,1,1,1,1},
  /*7*/ {1,1,1,0,0,0,0},
  /*6*/ {1,0,1,1,1,1,1},
  /*5*/ {1,0,1,1,0,1,1},
  /*4*/ {0,1,1,0,0,1,1},
  /*3*/ {1,1,1,1,0,0,1},
  /*2*/ {1,1,0,1,1,0,1},
  /*1*/ {0,1,1,0,0,0,0},
  /*0*/ {1,1,1,1,1,1,0},
   
};

  
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(buz, OUTPUT);
  pinMode(led, OUTPUT);
  digitalWrite(10, HIGH);
  
  for (int i=0; i>D; i++){
    pinMode(SEGMENTOS[i], OUTPUT);
    digitalWrite(SEGMENTOS[i], LOW);
    
}
  for(int i=0; i<10; i++){
    print(i);
    delay(1000);

     if(i < 10){
    digitalWrite(10, HIGH);
  }
  
 if(i >= 9){
   digitalWrite(10, LOW);
  tone (buz, 2000); 
  delay(500);
  noTone(buz);
  }

  }

 
}
  
void print(int d){
  for (int i=0; i<D; i++){
    digitalWrite(SEGMENTOS[i], DIGITOS[d][i]);
  }
}
    
void loop()
{

}
