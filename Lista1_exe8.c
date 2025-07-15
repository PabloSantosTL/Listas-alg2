void categoriaNadador(int idade,char *cat){
    if(idade>=5&&idade<=7) cat="Infantil A";
    else if(idade>=8&&idade<=10) cat="Infantil B";
    else if(idade>=11&&idade<=13) cat="Juvenil A";
    else if(idade>=14&&idade<=17) cat="Juvenil B";
    else if(idade>=18) cat="Adulto";
    else cat="Sem categoria";
    printf("%s\n",cat);
}
