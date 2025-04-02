#include <iostream>

using namespace std;

class Rectangulo{
    float x, y, largura, altura;
    public:
    Rectangulo(float a=0, float l=0, float px=0, float py=0){
        x = px;
        y = py;
        altura = a;
        largura = l;        
    }
    
    float getAltura(){ return altura; }
    float getLargura(){ return largura; }
    float getx(){ return x; }
    float gety(){ return y; }
    
    void setAltura(float a){ if (a >= 0) altura = a; }
    void setLargura(float l){ if (l >= 0) largura = l; }
    void setPosicao(float px, float py){ x = px; y = py; }
    
    float calculaArea(){ return altura * largura; }
};

int main(){
        Rectangulo r(5, 10), r1(2, 5, 10, -4);
        cout << "Altura= " << r.getAltura() << endl;
        cout << "Largura= " << r.getLargura() << endl;
        cout << "Posicao= (" << r.getx() << ", " << r.gety() << ")" << endl;
        cout << "Area= " << r.calculaArea() << endl;

        r.setAltura(0);
        r.setLargura(12.8);
        r.setPosicao(-5,10);

        cout << "Altura= " << r.getAltura() << endl;
        cout << "Largura= " << r.getLargura() << endl;
        cout << "Posicao= (" << r.getx() << ", " << r.gety() << ")" << endl;
        cout << "Area= " << r.calculaArea() << endl;
}


