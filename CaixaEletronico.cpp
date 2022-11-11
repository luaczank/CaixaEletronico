
#include <stdio.h>

int main()
{
    int senha;
    float saldo=100.00;
    
    int saque=1;
    int valorSaque;
    
    int deposito=2;
    int valorDeposito;
    
    int transferencia=3;
    int valorTransferencia;
    
    int sair=0;
    int opcao;
  
    int x,y,z;
    printf("\n Entre com a senha: ");
    scanf("%d",&senha);
    
    if(senha==0000)
  
    {
        printf("\n *******MENU******");
        printf("\n Saldo:R$ %.2f",saldo);
        printf("\n *****************");
        printf("\n '0' SAIR ");
        printf("\n '1' SAQUE");
        printf("\n '2' DEPÓSITO");
        printf("\n '3' TRANSFERENCIA");
        printf("\n *****************");
        printf("\n ESCOLHA A OPÇÃO: ");
        scanf("%d",&opcao);
     
        
        if(opcao==0)
         {//menu sair
           printf("\n Obrigado, Volte sempre!");
           return 0;
         }
           
            if(opcao==1)
             {//menu saque
                printf("\n Digite valor do saque: ");
                scanf("%d",&valorSaque);
             
                  if(valorSaque<=saldo)
                   {
                     printf("\n Saque de:R$ %d realizado com sucesso",valorSaque);
                     saldo=(saldo-valorSaque);
                     printf("\n Seu saldo e: R$ %.2f",saldo);
                   }
               else if (valorSaque>saldo) 
                {
                    printf("\n Saldo insuficiente!!!");
                    
                    printf("\n informe valor de ate R$ %.2f",saldo);
                    printf("\n Digite valor do saque: ");
                    scanf("%d",&valorSaque);
             
                  if(valorSaque<=saldo)
                   {
                     printf("\n Saque de:R$ %d realizado com sucesso",valorSaque);
                     saldo=(saldo-valorSaque);
                     printf("\n Seu saldo e: R$ %.2f",saldo);
                   }
                   
                    
                }
             }
             
             if(opcao==2)
             {//menu deposito
               printf("\n Digite o valor a ser depositado: ");
               scanf("%d",&valorDeposito);
               printf("\n Aguarde**************");
               printf("\n *********************");
               printf("\n *********************");
               saldo = (saldo+valorDeposito);
               printf("\n Deposito realizado com sucesso");
               printf("\n Seu saldo é: R$ %.2f",saldo);
               return 0;
           }
           
           if(opcao==3)
           {//menu transferencia
               printf("\n Informe Agencia");
               printf("\n (Ex: 1234)");
               printf("\n➡: ");
               scanf("%d",&x);
               printf("\n Informe a conta com digito");
               printf("\n (EX: 123456)");
               printf("\n➡: ");
               scanf("%d",&y);
               printf("\n Informe valor R$: ");
               scanf("%d",&valorTransferencia);
               printf("\n Agencia_Conta");
               printf("\n    %d_%d   ",x,y);
               printf("\n R$ %d",valorTransferencia);
               printf("\n Confirmar transferencia ?");
               printf("\n 1(Sim), 2(Corrigir)");
               scanf("%d",&z);
               if(z==1)
               {
                   if(valorTransferencia<=saldo)
                    {
                      printf("\n Transferindo.......");
                      printf("\n Transferencia de R$ %.2d, realizada com sucesso",valorTransferencia);
                      saldo =(saldo-valorTransferencia);
                      printf("\n Seu saldo é R$ %.2f",saldo);
                      }
                       else if(valorTransferencia>saldo)
                       {
                        printf("\n Saldo insuficiente");
                        printf("\n Transferencia de R$ %.2d, nao pode ser realizada",valorTransferencia);
                        printf("\n Informe valor de até R$ %.2f",saldo);
                        printf("\n Informe valor R$: ");
                        scanf("%d",&valorTransferencia);
                        printf("\n Agencia_Conta");
                        printf("\n    %d_%d",x,y);
                        printf("\n R$ %d",valorTransferencia);
                        printf("\n Confirmar transferencia ?");
                        printf("\n 1(Sim), 2(Corrigir)");
                        scanf("%d",&z);  
                         if(valorTransferencia<=saldo)
                          {
                             printf("\n Transferindo.......");
                             printf("\n Transferencia de R$ %.2d, realizada com sucesso",valorTransferencia);
                             saldo =(saldo-valorTransferencia);
                             printf("\n Seu saldo é R$ %.2f",saldo);
                          }
                       }
                    
                }
               
               if(z==2)
               {
                 printf("\n Informe Agencia");
                 printf("\n (Ex: 1234)");
                 printf("\n➡: ");
                 scanf("%d",&x);
                 printf("\n Informe a conta com digito");
                 printf("\n (EX: 123456)");
                 printf("\n➡: ");
                 scanf("%d",&y);
                 printf("\n Informe valor R$: ");
                 scanf("%d",&valorTransferencia);
                 printf("\n Agencia_Conta");
                 printf("\n    %d_%d",x,y);
                 printf("\n R$ %d",valorTransferencia);
                 printf("\n Confirmar transferencia ?");
                 printf("\n 1(Sim), 2(Corrigir)");
                 scanf(" %d",&z);  
                  if(valorTransferencia<=saldo)
                    {
                      printf("\n Transferindo.......");
                      printf("\n Transferencia de R$ %.2d, realizada com sucesso",valorTransferencia);
                      saldo =(saldo-valorTransferencia);
                      printf("\n Seu saldo é R$ %.2f",saldo);
                    }
                    //========================================
                     else if(valorTransferencia>saldo)
                       {
                        printf("\n Saldo insuficiente");
                        printf("\n Transferencia de R$ %.2d, nao pode ser realizada",valorTransferencia);
                        printf("\n Informe valor de até R$ %.2f",saldo);
                        printf("\n Informe valor R$: ");
                        scanf("%d",&valorTransferencia);
                        printf("\n Agencia_Conta");
                        printf("\n    %d_%d",x,y);
                        printf("\n %d",valorTransferencia);
                        printf("\n Confirmar transferencia ?");
                        printf("\n 1(Sim), 2(Corrigir)");
                        scanf(" %d ?",&z);  
                         if(valorTransferencia<=saldo)
                          {
                             printf("\n Transferindo.......");
                             printf("\n Transferencia de R$ %.2d, realizada com sucesso",valorTransferencia);
                             saldo =(saldo-valorTransferencia);
                             printf("\n Seu saldo é R$ %.2f",saldo);
                          }
                          return 0;
                       }
                   
               }
              // return 0;
            }
           
       }   
        
    
    else 
     {
        printf("\n Senha incorreta");
     }

    return 0;
}
