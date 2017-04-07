#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int pn(x){ // Ingresamos el primero operando.
    printf("Ingresar el primero numero\n");
    scanf("%d",&x);
    return x;
}
int sn(y){ // Ingresamos el segundo operando.
    printf("Ingresar el segundo numero\n");
    scanf("%d",&y);
    return y;

}
void suma (x,y){ // Realizamos la suma de los operandos.
    printf("El resultado de la suma es %d\n",x+y);

}
void resta (x,y){ // Realizamos la resta de los operandos.
printf("El resultado de la resta es %d\n",x-y);
}
void division (x,y){ // Realizamos la division.
float a=x,b=y;
   if(y==0){
    printf("Imposible dividir por el numero 0\n");
    }
     else{
        printf("El resultado de la division es %.3f\n",a/b);
    }

}
void multiplicacion (x,y){ //Realizamos la multiplicacion.
    printf("El resultado de la multiplicacion es %d\n",x*y);
}
void factorial (x){ //Realizamos factorial del operando.
    double a=1;
    int i=x;
     while(i>0){
            a=a*i;
            i--;
}
printf("El factorial de %d es %lg\n",x,a);
}



#endif // FUNCIONES_H_INCLUDED
