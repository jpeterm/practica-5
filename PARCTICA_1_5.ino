float L = 2.20462262;
int K = 50;
float x;

int A = 5;
float ma = 1000000;
float r;

const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5; 
const int e = 6;
const int f = 7;
const int g = 8;

const int D = 7;
const int SEGMENTOS[D] = {a,b,c,d,e,f,g};
 
const int DIGITOS[5][D] = {
  
  /*1*/ {0,1,1,0,0,0,0},
  /*3*/ {1,1,1,1,0,0,1},
  /*5*/ {1,0,1,1,0,1,1},
  /*7*/ {1,1,1,0,0,0,0},
  /*9*/ {1,1,1,1,0,1,1},
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
  
Serial.begin(9600);
  
r = Funcion1(A, ma);
  Serial.print(A);
  Serial.println(" Amperios equivalen a");
  Serial.print(r);
  Serial.println(" de MicroAmperios");
  
  Serial.println("--------------------------");
  
x = Funcion2(K, L);
  Serial.print(K);
  Serial.println(" Kilos equivalen a");
  Serial.print(x);
  Serial.print(" Libras");
  
  for (int i=0; i>D; i++){
    pinMode(SEGMENTOS[i], OUTPUT);
    digitalWrite(SEGMENTOS[i], LOW);
    
  }
}

void print(int d){
  for (int i=0; i<D; i++){
    digitalWrite(SEGMENTOS[i], DIGITOS[d][i]);
  }
}

float Funcion1(float f, float d){
float r; 
r = f * d;
  return r;
}
float Funcion2(float g, float h){
float x; 
x = g * h;
  return x;
}

void loop()
{
  for(int i=0; i<5; i++){
    print(i);
    delay(1000);
  }
}