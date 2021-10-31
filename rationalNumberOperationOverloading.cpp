#include<iostream>
using namespace std;

class RationalNumber{
    private:
        int p;
        int q;
    public:
        RationalNumber(int p=1,int q=1){
            this->p=p;
            this->q=q;
        }

        friend RationalNumber operator+(RationalNumber r1,RationalNumber r2);
        friend ostream& operator<<(ostream &o,RationalNumber r);
};

RationalNumber operator+(RationalNumber r1,RationalNumber r2){
    RationalNumber temp;
    temp.p=r1.p*r2.q+r2.p*r1.q;
    temp.q=r1.q*r2.q;
    return temp;
}

ostream& operator<<(ostream &o,RationalNumber r){
    o<<r.p<<"/"<<r.q;
    return o;
}

int main(){
    RationalNumber r1(3,5);
    RationalNumber r2(2,9);
    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r1+r2;
    return 0;
}