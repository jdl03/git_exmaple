

#include <iostream>
using namespace std;

int main() {
    
    //declaracion variables
    bool error = 0;
    string password;
    char  condicion = '@';
  
    
   
    //ciclo principal
    while (true) {
        
        //se pide contraseña
        cout<<"escribe tu contraseña: ";
        cin>>password;
        
        int n = password.length();
        
        char contra[n+1];
        
        strcpy(contra, password.c_str());
        cout<<contra;
        
        for (int j = 0; j <= n+1; j++) {
            
            cout<<contra[j]<<endl;
            
        }
        
        // se verifica que contenga caracter de seguridad
        for (int j = 0; j <= n+1; j++) {
            
            if (contra[j] == condicion ) {
                error = 0;
                break;
            } else {
                error = 1;
               
            }
    
        }
        
        if (error == 0) {
            break;
        } else{
            cout<<"le falta un 'J' a tu contraseña"<<endl;
        }
        
    }
    
    cout<<"tu contraseña es: "<<password<<endl;
    
    
    return 0;
}
