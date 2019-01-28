#include "Tienda.h"

string Tienda::convertiratexto(float f){
    stringstream ss;
	ss << f;
	return ss.str();
}
int Tienda::convertiranumero(string texto1){
	int number;
	number = atof(texto1.c_str());
	return number;
}
Tienda::Tienda(){
    bool b=true;
    int cont=1;
    while(b==true){
        string nameArchivo=convertiratexto(cont);
        nameArchivo += ".txt";
        ifstream fs(nameArchivo.c_str(),ios :: in);
        if(fs.fail()){
            b=false;
            tamanio--;
        }
        tamanio++;
        fs.close();
        cont++;
        contador++;
    }
    a=new Maquina[tamanio];
    for(int i=1;i<=tamanio;i++){
        string nameArchivo=convertiratexto(i);
        nameArchivo += ".txt";
        ifstream fs(nameArchivo.c_str(),ios :: in);
        a[i-1].set_nombre(obt_linea(nameArchivo,0));
        a[i-1].set_disponible(obt_linea(nameArchivo,1));
        string temp1=obt_linea(nameArchivo,2);
        a[i-1].set_precio(convertiranumero(temp1));
        string temp2=obt_linea(nameArchivo,3);
        a[i-1].set_numCod(convertiranumero(temp2));
        fs.close();
    }
}
int Tienda::lenght(string a){
    int cont=0;
    for(int i=0;a[i]!='\0';i++){
        cont++;
    }
    return cont;
}
int Tienda::conv_char(char a){
    return a-'0';
}





string Tienda::obt_linea(string a,int b){
    ifstream archivo_entrada(a.c_str());//tuve un error pero se soluciono,antes usaba solo el constructo
    string linea;
    int contador = 0;
    while(getline(archivo_entrada, linea)) {
        if(b==contador) {
            return linea;
        }
        contador++;
    }
}
void Tienda::mod_arch(string arch,string nomb="NULL",string disp="NULL",int precio=0,int num=0){
    string nameArchivo=arch;
    nameArchivo += ".txt";
    ofstream fs(nameArchivo.c_str());
    fs <<nomb<<endl;
    fs <<disp<<endl;
    fs <<precio<<endl;
    fs <<num<<endl;
    fs.close();
}

char Tienda::p_l(string a){//obtiene la letra
    return a[0];
}

void Tienda::imprimir(){
    for(int i=0;i<tamanio;i++){
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220);
        cout<<endl;
        cout<<"POSICION: "<<i+1<<endl;
        cout<<"NOMBRE: "<<a[i].get_nombre()<<endl;
            cout<<"DISPONIBLE"<<a[i].get_disponible()<<endl;
        cout<<"precio: "<<a[i].get_precio()<<endl;
        cout<<"NUMERO DE Maquina: "<<a[i].get_numCod()<<endl;
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220);
    }
}
void Tienda::borrar(int posicion){

    for(int i=posicion;i<tamanio-1;i++){
        string nombtemp1=a[i].get_nombre();
        string disptemp1=a[i].get_disponible();
        int preciotemp1=a[i].get_precio();
        int numptemp1=a[i].get_numCod();

        string nombtemp2=a[i+1].get_nombre();
        string disptemp2=a[i+1].get_disponible();
        int preciotemp2=a[i+1].get_precio();
        int numptemp2=a[i+1].get_numCod();

        mod_arch(convertiratexto(i+1),nombtemp1,disptemp1,preciotemp1,numptemp1);
        mod_arch(convertiratexto(i+2),nombtemp2,disptemp2,preciotemp2,numptemp2);
    }
    //////////
    string nameArchivo=convertiratexto(posicion+1);
    nameArchivo += ".txt";
    char buffer[5];
    strcpy(buffer,nameArchivo.c_str());
    remove(buffer);
    ///////////
    Maquina *nuevo= new Maquina [tamanio-1];
    tamanio--;
    for(int i=0;i<posicion;i++){
        nuevo[i]=a[i];
    }
    for(int i=posicion;i<tamanio;i++){
        nuevo[i]=a[i+1];
    }
    delete [] a;
    a=nuevo;
    //////////////////
    string nameA=convertiratexto(posicion+2);
    nameA+=".txt";
    char buffer1[5];
    strcpy(buffer1,nameA.c_str());
    rename(buffer1,buffer);
}


void Tienda::vacear(){
    for(int i=1;i<=tamanio;i++){

        string nameArchivo=convertiratexto(i);
        nameArchivo += ".txt";
        char buffer[5];
        strcpy(buffer,nameArchivo.c_str());
        remove(buffer);
    }
    cout<<"a"<<endl;
    delete [] a;
    tamanio=0;
}
int Tienda::get_tamanio(){
    return tamanio;
}

void Tienda::agregar(string nuevonombre,string nuevodisponible,int nuevaprecio){
    Maquina *nuevo= new Maquina[tamanio+1];
    for(int i=0;i<tamanio;i++){
        nuevo[i]=a[i];
    }
    tamanio++;
    nuevo[tamanio-1].set_nombre(nuevonombre);
    nuevo[tamanio-1].set_disponible(nuevodisponible);
    nuevo[tamanio-1].set_precio(nuevaprecio);
    nuevo[tamanio-1].set_numCod(++contador);
    delete [] a;
    a=nuevo;

    mod_arch(convertiratexto(get_tamanio()),nuevonombre,nuevodisponible,nuevaprecio,a[tamanio-1].get_numCod());

}
void Tienda::cambiar(int pos,int ed, string nom,string disp){
    a[pos].set_precio(ed);
    a[pos].set_nombre(nom);
    a[pos].set_disponible(disp);
    mod_arch(convertiratexto(pos+1),nom,disp,ed,a[pos].get_numCod());
}
int Tienda::comodin(string a,string b){
    int conta=0;
    if(lenght(b)<lenght(a)){
        return 0;
    }
    for(int i=0;b[i]!='\0';i++){
        if(b[i]==a[0]){
            for(int j=0;j<3;j++){
                if(a[j]==b[i+j]){
                    conta++;
                }
            }
            if(conta==3){
                return 1;
            }
        }
    }
    return 0;
}

template <typename U>
void Tienda:: swapp(U* a, U* b)
{
    U t = *a;
    *a = *b;
    *b = t;
}

void Tienda::ord_precio(){
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            if(a[i] > a[i+1]){
                swapp<Maquina>(a+i,a+i+1);



                mod_arch(convertiratexto(i+1),a[i].get_nombre(),a[i].get_disponible(),a[i].get_precio(),a[i].get_numCod());
                mod_arch(convertiratexto(i+2),a[i+1].get_nombre(),a[i+1].get_disponible(),a[i+1].get_precio(),a[i+1].get_numCod());

                cont+=1;
            }
        }
    }
}

void Tienda::ord_alf()
{
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            string uno=a[i].get_nombre();
            string dos=a[i+1].get_nombre();
            if(conv_char(p_l(uno)) > conv_char(p_l(dos))){
                swapp<Maquina>(a+i,a+i+1);
                mod_arch(convertiratexto(i+1),a[i].get_nombre(),a[i].get_disponible(),a[i].get_precio(),a[i].get_numCod());
                mod_arch(convertiratexto(i+2),a[i+1].get_nombre(),a[i+1].get_disponible(),a[i+1].get_precio(),a[i+1].get_numCod());

                cont+=1;
            }
        }
    }
}

void Tienda::ord_numEl(){
    int cont=1;
    while(cont!=0){
        cont=0;
        for(int i=0;i<tamanio-1;i++){
            if(a[i].get_numCod() > a[i+1].get_numCod()){

                swapp<Maquina>(a+i,a+i+1);
                mod_arch(convertiratexto(i+1),a[i].get_nombre(),a[i].get_disponible(),a[i].get_precio(),a[i].get_numCod());
                mod_arch(convertiratexto(i+2),a[i+1].get_nombre(),a[i+1].get_disponible(),a[i+1].get_precio(),a[i+1].get_numCod());


                cont+=1;
            }
        }
    }
}


bool Tienda::buscar(string a,string b){
    int conta=1;
    if(lenght(b)<lenght(a)){
        return 0;
    }
    for(int i=0;b[i]!='\0';i++){
        if(b[0]==a[0]){
            if(a[i]==b[i]){
                conta++;
            }
            if(conta==lenght(b)){
                return 1;
            }
        }
    }
    return 0;
}

void Tienda::bus_prod(string nnombre){
    for(int i=0;i<tamanio;i++){
        if(buscar(nnombre,a[i].get_nombre())){
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220);
            cout<<"ENCONTRADO"<<endl;
            cout<<"NOMBRE: "<<a[i].get_nombre()<<endl;
            cout<<"DISPONIBLE"<<a[i].get_disponible()<<endl;
            cout<<"precio: "<<a[i].get_precio()<<endl;
            cout<<"NUMERO DE Maquina: "<<a[i].get_numCod()<<endl;
            return;
        }
    }
    cout<<"Busquedas relacionadas: "<<endl;
    for(int i=0;i<tamanio;i++){
        if(comodin(nnombre,a[i].get_nombre())){
            cout<<a[i].get_nombre()<<endl;
        }
    }
}
void Tienda::bus_numEl(int num){
    int en=0;
    for(int i=0;i<tamanio;i++){
        if(a[i].get_numCod() == num){
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220);
            cout<<"ENCONTRADO"<<endl;
            cout<<"NOMBRE: "<<a[i].get_nombre()<<endl;
            cout<<"DISPONIBLE"<<a[i].get_disponible()<<endl;
            cout<<"precio: "<<a[i].get_precio()<<endl;
            cout<<"NUMERO DE Maquina"<<a[i].get_numCod()<<endl;
            en+=1;
        }
    }
    if(en==0){
        cout<<"NO ENCONTRADO"<<endl;
    }
}
Tienda::~Tienda(){
    delete []a;
}
