float somma(float a, float b) {
    float r;
    r=a+b;
    return r;
}

float sottrazione(float a, float b) {
      float r;
      r=a-b;
      return r;
}

float prodotto(float a, float b) {
      float r;
      r=a*b;
      return r;
}

float divisione(float a, float b) {
    float r;
    r=a/b;
    return r;
}

int quoziente(int a, int b) {
    int r;
    r=a/b;
    return r;
}

float frazionale(int a, int b) {
    float r,f;
    int q;
    f=divisione((float)a,(float)b);
    q=quoziente(a,b);
    r=f-q;
    return r;
}

float potenza(float base, int esponente) {
    float r;
    int i;
    r=1;
    for(i=0;i<esponente;i++){
     r*=base;                                   
    }
    
    return r;
}

