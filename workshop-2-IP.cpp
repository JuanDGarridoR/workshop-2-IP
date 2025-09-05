#include <iostream>

using namespace std;

void firstPoint();
void secondPoint();
void thirdPoint();
void fourthPoint();
void fifthPoint();
void sixthPoint();

int main(){
    
    int option=-1;

    do{
        cout<<"=====Taller #2 - IP====="<<endl;
        cout<<"1. Punto uno."<<endl;
        cout<<"2. Punto dos."<<endl;
        cout<<"3. Punto tres."<<endl;
        cout<<"4. Punto cuatro."<<endl;
        cout<<"5. Punto cinco."<<endl;
        cout<<"6. Punto seis."<<endl;
        cout<<"0. Salir."<<endl;
        cout<<"\nDigite la opcion a la que desea ingresar: ";
        cin>>option;
        cout<<"========================"<<endl;

        switch (option){
        case 1:
             firstPoint();
            break;
    
        case 2:
            secondPoint();
            break;
        
        case 3:
            thirdPoint();
            break;
        
        case 4:
            fourthPoint();
            break;

        case 5:
            fifthPoint();
            break;

        case 6:
            sixthPoint();
            break;
        
        case 0:
            cout<<"Saliendo del programa."<<endl;
            break;
            
        default:
            cout<<"Digite una opcion valida."<<endl;
        }

    }while(option!=0);

    return 0;
}

void firstPoint(){

    int actualSalary=0, newSalary=0;
    char gender;

    cout<<"Digite F o M (Femenino / Masculino) para indicar su genero: ";
    cin>>gender;
    cout<<"Digite su salario: ";
    cin>>actualSalary;

    if (actualSalary>0){
        
        if(gender=='F'){

            newSalary=actualSalary+(actualSalary*0.1); 
            cout<<"\nSu nuevo salario es de: "<<newSalary<<endl;          
        }else if(gender=='M'){

            newSalary=actualSalary+(actualSalary*0.07);
            cout<<"\nSu nuevo salario es de: "<<newSalary<<endl;
        }else{

            cout<<"\nEl genero no es valido, digitelo de nuevo."<<endl;
            firstPoint();
        }
    }else{

        cout<<"\nEl salario no es valido, digitelo de nuevo."<<endl;
        firstPoint();
    }
}

void secondPoint(){

    int quantity=0, unitValue=0, finalValue=0;

    cout<<"Digite cuantos articulos desea comprar: ";
    cin>>quantity;
    cout<<"Digite el valor del articulo: ";
    cin>>unitValue;

    if(quantity>0 && unitValue>0){
        
        finalValue=quantity*unitValue;

        if(finalValue>500000){

            finalValue=finalValue-(finalValue*0.05);
            finalValue=finalValue+(finalValue*0.2);
            cout<<"\nEl valor total a pagar es de: "<<finalValue<<endl;
        }else{

            finalValue=finalValue+(finalValue*0.2);
            cout<<"\nEl valor total a pagar es de: "<<finalValue<<endl;
        }
    }else{

        cout<<"\nLos valores no son validos, digitelos de nuevo."<<endl;
        secondPoint();
    }
}

void thirdPoint(){
   
    int minutes=0, fee=50000;

    cout<<"Digite cuantos minutos hablo en el mes: ";
    cin>>minutes;

    if(minutes>0){

        if(minutes<=500){

            fee=(fee+minutes*100);
            cout<<"\nEl valor total a pagar es de: "<<fee<<endl;
        }else{

            fee=fee+(500*100);
            fee=fee+(minutes-500)*60;
            cout<<"\nEl valor total a pagar es de: "<<fee<<endl;
        }

    }else{
        
        cout<<"\nLos minutos no son validos, digitelos de nuevo."<<endl;
        thirdPoint();
    }
}

void fourthPoint(){
    
    int age=0, fee=12000;

    cout<<"Digite su edad: ";
    cin>>age;

    if(age>0){

        if(age<=12||age>60){

            fee=fee-(fee*0.5);
            cout<<"\nEl valor a pagar por la boleta es de: "<<fee<<endl;
        }else{

            cout<<"\nEl valor a pagar por la boleta es de: "<<fee<<endl;
        }
    }else{
        
        cout<<"\nLa edad no es valida, digitela de nuevo."<<endl;
        fourthPoint();
    }
}

void fifthPoint(){

    int number1=0, number2=0, result=0;
    char operation;

    cout<<"Digite la operacion: ";
    cin>>number1;
    cin>>operation;
    cin>>number2;

    switch(operation){
        case '+':
            result=number1+number2;
            cout<<"\nEl resultado es: "<<result<<endl;
            break;

        case '-':
            result=number1-number2;
            cout<<"\nEl resultado es: "<<result<<endl;
            break;

        case '*':
            result=number1*number2;
            cout<<"\nEl resultado es: "<<result<<endl;
            break;

        case '/':
            result=number1/number2;
            cout<<"\nEl resultado es: "<<result<<endl;
            break;

        case '%':
            result=number1%number2;
            cout<<"\nEl resultado es: "<<result<<endl;
            break;
        
        default:
            cout<<"\nDigite una opcion valida."<<endl;
            fifthPoint();
    }
}

void sixthPoint(){

    int age=0, price=20000;
    char category, entryType;

    cout<<"Digite su edad: ";
    cin>>age;
    cout<<"Digite L o T (Local / Turista) para indicar su categoria: ";
    cin>>category;
    cout<<"Digite N, E o P (Normal / Especial / Plus) para indicar el tipo de entrada: ";
    cin>>entryType;

    if(age>0){

        if(category=='L'||category=='T'){

            if(entryType=='N'||entryType=='E'||entryType=='P'){

                if(age<12||age>60){
                    
                    switch(category){
                        case 'L':
                            if(entryType=='N'){
                                
                                price=(price-5000);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }else if(entryType=='E'){
                                
                                price=(price-5000);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }else{
                                
                                price=(price-5000)-(price*0.01);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }
                            break;

                        case 'T':
                            if(entryType=='N'){

                                price=(price-5000)-(price*0.02);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }else if(entryType=='E'){

                                price=(price-5000)-(price*0.03);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }else{

                                price=(price-5000)-(price*0.04);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }
                            break;
                    }

                }else{
                    switch(category){
                        case 'L':
                            if(entryType=='N'){

                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }else if(entryType=='E'){
                                
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }else{
                                
                                price=price-(price*0.01);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }
                            break;

                        case 'T':
                            if(entryType=='N'){

                                price=price-(price*0.02);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }else if(entryType=='E'){

                                price=price-(price*0.03);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }else{

                                price=price-(price*0.04);
                                cout<<"El precio de la entrada es: "<<price<<endl;
                            }
                            break;
                    }
                }

            }else{
                
                cout<<"\nEl tipo de entrada no es valida, digitela de nuevo."<<endl;
                fifthPoint();
            }

        }else{

            cout<<"\nLa categoria no es valida, digitela de nuevo."<<endl;
            fifthPoint();
        }

    }else{

        cout<<"\nLa edad no es valida, digitela de nuevo."<<endl;
        fifthPoint();
    }
    
}
