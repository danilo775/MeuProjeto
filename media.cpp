#include<iostream>
#include<cstdlib>

using namespace std;

float calcula_media(float n1, float n2, float n3, int tipo) {
    float m;
    
    if(tipo == 1){ /* Media Aritmética */
        m = (n1+n2+n3)/3;
    }
    if (tipo == 2){ /* Media Ponderada  */
        m = (n1*5+n2*3+n3*2)/(5+3+2);
    }
       
    return m;
}
    
int main(){
    cout<<"\t       ++++++ MEDIA ++++++\n";
    cout<<"\t ======================================== \n";
    cout<<"\t |1=Aritemtica  2=Ponderada \n";
    cout<<"\t ======================================== \n";
    
    float n1,n2,n3, media;
    int escolha;

    cout<<"Nota do aluno:";
    cout<<"\n\n";
    cout<<"Nota 1: ";
    cin>>n1;
    cout<<"Nota 2: ";
    cin>>n2;
    cout<<"Nota 3: ";
    cin>>n3;

    cout<<"Ecolha uma media: ";
    cin>>escolha;
    media = calcula_media(n1, n2, n3, escolha);
    cout << "Media: " << media << endl;
    system("pause");
    return 0;
}