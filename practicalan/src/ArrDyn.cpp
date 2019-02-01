#include "ArrDyn.h"

ArrDyn::ArrDyn()
{
    sizee = 0;
    data = new Polygon*[sizee];
}
ArrDyn::ArrDyn(Polygon **ndata,int nsize){
    sizee = nsize;
    data = new Polygon*[sizee];
    for(int i = 0;i < sizee;i++)
        data[i] = ndata[i];
}
ArrDyn::ArrDyn(const ArrDyn &o){
    sizee = o.sizee;
    data = new Polygon*[sizee];
    for(int i = 0;i < sizee;i++)
        data[i] = o.data[i];
}

void ArrDyn:: push_back(Polygon *val){
    resizee(sizee + 1);
    data[sizee - 1] = val;
}
void ArrDyn:: insert(Polygon *val,int pos){
    if(pos >= 0 && pos < sizee){
        resizee(sizee + 1);
        for(int i = sizee-1;i > pos;i--)
                data[i] = data[i-1];
            data[pos] = val;
    }
}

void ArrDyn:: remove(int pos){
    if( pos >= 0 && pos < sizee) {
        for(int i = pos; i < sizee - 1; i++)
                data[i] = data[i + 1];
        resizee(sizee - 1);
    }
}

void ArrDyn:: print(){
    for(int i = 0;i < sizee;i++)
            data[i]->printa();
    cout << endl;
}
void ArrDyn::resizee(int newsize){
    Polygon **ptr = new Polygon*[newsize];
    int minsize =((newsize > sizee)? sizee : newsize);
    for(int i = 0;i < minsize;i++)
        ptr[i] = data[i];
    delete[] data;
    sizee = newsize;
    data = ptr;
}
ArrDyn::~ArrDyn()
{
    delete[] data;
}
