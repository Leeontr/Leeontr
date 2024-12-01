
#include <stdio.h>
#include <stdlib.h>
    
    float depositar(float saldo ){
        float deposito = 0;
        
        do{
            printf("|Faca seu deposito|\n");
            printf("Digite quanto deseja depositar: ");
            scanf("%f", &deposito);
        
            if(deposito <= 0){
                printf("ERRO! Digite um valor valido!\n");
            }
        
        saldo = saldo + deposito;
        printf("\n| O Valor %.2f foi depositado com sucesso |\n", deposito);
        
        }while(deposito <= 0);

        return saldo;
    }
    
    float sacar(float saldo){
        float saque = 0;
        
        do{
            printf("|Faça seu saque|\n");
            printf("Digite o valor que deseja sacar: ");
            scanf("%f", &saque);
        
        
            if(saque <= 0){
                printf("ERRO! Digite um valor valido!\n");
            }
            if(saque <= saldo){
                saldo = saldo - saque;
                printf(" \n|Saque no valor %.2f realizado|\n", saque);
            }
            if(saque > saldo){
                printf("Saldo insuficiente!\n");
            }break;

            
        }while(saque <= 0);
        
        return saldo;
    }
    

    int main(){
        float saldo = 0;
        int i, opcao;
        char continuar;
        
        do{
        printf("-----------------------------------------\n");
        printf("Seja bem vindo, escolha a opcao desejada:\n");
        printf("-----------------------------------------\n");
        printf("1 | Fazer um DEPOSITO    |\n");
        printf("2 | Fazer um SAQUE       |\n");
        printf("3 | Verificar saldo atual|\n\n");
        scanf("%d", &opcao);
        
        if(opcao == 1){
            saldo = depositar(saldo);  
        }
        else if(opcao == 2){
            saldo = sacar(saldo);
        }
        else if(opcao == 3){
            printf("Seu saldo atual eh de %.2f\n", saldo);
        }

        
        printf("\nDeseja continuar? [S/N]\n");
        scanf(" %c", &continuar);
        
        }while(continuar == 'S' || continuar == 's');

        
        return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
