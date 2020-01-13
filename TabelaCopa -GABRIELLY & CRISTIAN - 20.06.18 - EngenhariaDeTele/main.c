#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "data.h"
#include "hora.h"
#include "jogo.h"
#include "lista_jogos.h"
#include "selecao.h"
#include "lista_selecao.h"

void get_nome_sel(TListaSel ls, int cod, char *ns)
{
    int i;
    strcpy(ns, "");
    for(i=0; i<32; i++)
    {
        if(cod == ls.selecoes[i].codigo) {
            strcpy(ns, ls.selecoes[i].pais);
            break;
        }
    }
}

void mostre_jogo(TJogo jog, TListaSel ls)
{
    char np1[15];
    char np2[15];
    get_nome_sel(ls,jog.cod_pais1, np1);
    get_nome_sel(ls,jog.cod_pais2, np2);
    printf("%02d/%02d %02d:%02d %15s   x   %-15s",
           jog.data.dia, jog.data.mes, jog.hora.hora,
           jog.hora.minuto, np1, np2);
}

void mostre_lis_jogosAT1(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[0], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosAT2(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[1], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosAT3(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[16], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosAT4(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[18], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosAT5(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[32], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosAT6(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[33], ls); //Rússia x Arábia saudita
 printf("\n");
}


void mostre_lis_jogosBT1(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[2], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosBT2(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[3], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosBT3(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[17], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosBT4(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[19], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosBT5(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[34], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosBT6(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[35], ls); //Rússia x Arábia saudita
 printf("\n");
}



void mostre_lis_jogosCT1(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[4], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosCT2(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[6], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosCT3(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[20], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosCT4(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[21], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosCT5(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[36], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosCT6(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[37], ls); //Rússia x Arábia saudita
 printf("\n");
}

void mostre_lis_jogosDT1(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[5], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosDT2(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[7], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosDT3(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[22], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosDT4(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[24], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosDT5(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[38], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosDT6(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[39], ls); //Rússia x Arábia saudita
 printf("\n");
}

void mostre_lis_jogosET1(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[8], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosET2(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[10], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosET3(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[23], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosET4(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[25], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosET5(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[42], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosET6(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[43], ls); //Rússia x Arábia saudita
 printf("\n");
}



void mostre_lis_jogosFT1(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[9], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosFT2(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[11], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosFT3(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[27], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosFT4(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[28], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosFT5(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[40], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosFT6(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[41], ls); //Rússia x Arábia saudita
 printf("\n");
}


void mostre_lis_jogosGT1(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[12], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosGT2(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[13], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosGT3(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[26], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosGT4(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[29], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosGT5(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[46], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosGT6(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[47], ls); //Rússia x Arábia saudita
 printf("\n");
}


void mostre_lis_jogosHT1(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[14], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosHT2(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[15], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosHT3(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[30], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosHT4(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[31], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosHT5(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[44], ls); //Rússia x Arábia saudita
 printf("\n");
}
void mostre_lis_jogosHT6(TListaJog lj, TListaSel ls)
{
 mostre_jogo(lj.jogos[45], ls); //Rússia x Arábia saudita
 printf("\n");
}

void mostre_lis_jogosA(TListaJog lj, TListaSel ls)
{

        mostre_jogo(lj.jogos[0], ls); //Rússia x Arábia saudita
        printf("\n");
         mostre_jogo(lj.jogos[1], ls); //Egito x Uruguai
        printf("\n");
         mostre_jogo(lj.jogos[16], ls); //Rússia x Egito
        printf("\n");
         mostre_jogo(lj.jogos[18], ls); //Uruguai x Arábia saudita
        printf("\n");
         mostre_jogo(lj.jogos[32], ls); // Arábia saudita x Egito
        printf("\n");
         mostre_jogo(lj.jogos[33], ls); //Uruguai x Rússia
        printf("\n");

}
void mostre_lis_jogosB(TListaJog lj, TListaSel ls)
{

        mostre_jogo(lj.jogos[2], ls); // Marrocos x Ira
        printf("\n");
        mostre_jogo(lj.jogos[3], ls); //Portugual x espanha
        printf("\n");
        mostre_jogo(lj.jogos[17], ls); // Portugal x marrocos
        printf("\n");
        mostre_jogo(lj.jogos[19], ls); // ira x espanha
        printf("\n");
        mostre_jogo(lj.jogos[34], ls); // ira x   Portugal
        printf("\n");
        mostre_jogo(lj.jogos[35], ls); //  espanha  x marrocos
        printf("\n");
}
void mostre_lis_jogosC(TListaJog lj, TListaSel ls)
{

        mostre_jogo(lj.jogos[4], ls); //França x australia
        printf("\n");
        mostre_jogo(lj.jogos[6], ls); // Peru x dinamarca
        printf("\n");
        mostre_jogo(lj.jogos[20], ls); //Dinamarca x australia
        printf("\n");
        mostre_jogo(lj.jogos[21], ls); //França x peru
        printf("\n");
         mostre_jogo(lj.jogos[36], ls); // australia x  peru
        printf("\n");
        mostre_jogo(lj.jogos[37], ls); //Dinamarca  x  França
        printf("\n");
}
void mostre_lis_jogosD(TListaJog lj, TListaSel ls)
{

        mostre_jogo(lj.jogos[5], ls); //argentina x islandia
        printf("\n");
        mostre_jogo(lj.jogos[7], ls); //croacia x nigeria
        printf("\n");
        mostre_jogo(lj.jogos[22], ls);//argentina x croacia
        printf("\n");
        mostre_jogo(lj.jogos[24], ls);//nigeria x islandia
        printf("\n");
        mostre_jogo(lj.jogos[38], ls);//nigeria  x  argentina
        printf("\n");
        mostre_jogo(lj.jogos[39], ls);// islandia x croacia
        printf("\n");
}
void mostre_lis_jogosE(TListaJog lj, TListaSel ls)
{

        mostre_jogo(lj.jogos[8], ls); //costa rica x servia
        printf("\n");
        mostre_jogo(lj.jogos[10], ls); // Brasil x suiça
        printf("\n");
        mostre_jogo(lj.jogos[23], ls);//Brasil x costa rica
        printf("\n");
        mostre_jogo(lj.jogos[25], ls);// servia x suiça
        printf("\n");
         mostre_jogo(lj.jogos[42], ls);//suiça  x costa rica
        printf("\n");
        mostre_jogo(lj.jogos[43], ls);// servia x Brasil
        printf("\n");
}
void mostre_lis_jogosF(TListaJog lj, TListaSel ls)
{

        mostre_jogo(lj.jogos[9], ls); //alemanha x mexico
        printf("\n");
        mostre_jogo(lj.jogos[11], ls);//suecia x coreia do sul
        printf("\n");
        mostre_jogo(lj.jogos[27], ls); //coreia do sul x mexico
        printf("\n");
        mostre_jogo(lj.jogos[28], ls); //alemanha x suecia
        printf("\n");
         mostre_jogo(lj.jogos[40], ls); //coreia do sul x  alemanha
        printf("\n");
        mostre_jogo(lj.jogos[41], ls); // mexico x suecia
        printf("\n");
}
void mostre_lis_jogosG(TListaJog lj, TListaSel ls)
{

        mostre_jogo(lj.jogos[12], ls); //belgica x parama
        printf("\n");
        mostre_jogo(lj.jogos[13], ls); //tunisia x inglaterra
        printf("\n");
        mostre_jogo(lj.jogos[26], ls); //belgica x tusnia
        printf("\n");
        mostre_jogo(lj.jogos[29], ls);//inglaterra x panama
        printf("\n");
        mostre_jogo(lj.jogos[46], ls); //inglaterra  x belgica
        printf("\n");
        mostre_jogo(lj.jogos[47], ls);//panama x  tusnia
        printf("\n");
}
void mostre_lis_jogosH(TListaJog lj, TListaSel ls)
{

        mostre_jogo(lj.jogos[14], ls);//colombia x japao
        printf("\n");
        mostre_jogo(lj.jogos[15], ls);//polonia x senegal
        printf("\n");
        mostre_jogo(lj.jogos[30], ls);//japao x senegal
        printf("\n");
        mostre_jogo(lj.jogos[31], ls);//polonia x colombia
        printf("\n");
         mostre_jogo(lj.jogos[44], ls);//senegal x  colombia
        printf("\n");
        mostre_jogo(lj.jogos[45], ls);//japao  x polonia
        printf("\n");
}



char menu_principal()
{
    printf("\n**************************\n");
    printf("*     Menu Principal     *\n");
    printf("**************************\n");
    printf("  1. Jogos por grupo\n",135,198);
    printf("  2. Alterar saldo de gols\n",135,198);
    printf("  3. Oitavas de Final\n",135,198);
    printf("  4. Quartas de Final\n",135,198);
    printf("  5. Semi Final\n",135,198);
    printf("  6. Final\n",135,198);
    printf("  0. Sair do aplicativo\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}

char submenu()
{
    printf("\n\n**************************\n");
    printf("*        Submenu         *\n");
    printf("**************************\n");
    printf("  1. Grupo A\n",135,198);
    printf("  2. Grupo B\n",135,198);
    printf("  3. Grupo C\n",135,198);
    printf("  4. Grupo D\n",135,198);
    printf("  5. Grupo E\n",135,198);
    printf("  6. Grupo F\n",135,198);
    printf("  7. Grupo G\n",135,198);
    printf("  8. Grupo H\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}
char submenuJogos()
{
    printf("\n\n**************************\n");
    printf("*        JOGOS         *\n");
    printf("**************************\n");
    printf("  1. Jogo 01\n",135,198);
    printf("  2. Jogo 02\n",135,198);
    printf("  3. Jogo 03\n",135,198);
    printf("  4. Jogo 04\n",135,198);
    printf("  5. Jogo 05\n",135,198);
    printf("  6. Jogo 06\n",135,198);
    printf("  0. Retornar ao menu anterior\n");
    printf("\n  Escolha uma op%c%co: ",135,198);
    return getche();
}


int main()
{
    FILE *fp;
	int resA, resB, i, pro = 1;
	TListaSel lis_sel;
    Tgols xgols;
	TListaJog lis_jog;
	lis_jog.num_jog = 0;

	fp = fopen("selecoes.arq", "rb");
	fread(&pro, sizeof(int), 1, fp);
	fread(&lis_sel.num_sel, sizeof(int), 1, fp);
	fread(lis_sel.selecoes, sizeof(TSelecao), lis_sel.num_sel, fp);
	fclose(fp);

    fp = fopen("jogos.arq", "rb");
    fread(&lis_jog.num_jog, sizeof(int), 1, fp);
    fread(lis_jog.jogos, sizeof(TJogo), lis_jog.num_jog, fp);
    fclose(fp);

    char op, op2,op3,opA,opB,opC,opD,opE,opF,opG,opH;
    while(1)
    {
        op = menu_principal();
        if(op == '0')
            break;
        switch(op)
        {
            case '1':
                while(1)
                {
                    op2 = submenu();
                    if(op2 == '0')
                    {
                        break;
                    }
                    switch(op2)
                    {
                        case '1':
                            printf("\n**************************************\n");
                            printf("**              Grupo A            **\n");
                            printf("**************************************\n");
                            printf("-------------------------------------------\n");
                            printf("DATA | HORA |              JOGOS          |",224,144);
                            printf("\n-------------------------------------------\n");
                            mostre_lis_jogosA(lis_jog, lis_sel);
                            break;
                        case '2':
                            printf("\n**************************************\n");
                            printf("**              Grupo B            **\n");
                            printf("**************************************\n");
                            printf("-------------------------------------------\n");
                            printf("DATA | HORA |              JOGOS          |",224,144);
                            printf("\n-------------------------------------------\n");
                            mostre_lis_jogosB(lis_jog, lis_sel);
                            break;
                        case '3':
                            printf("\n**************************************\n");
                            printf("**              Grupo C            **\n");
                            printf("**************************************\n");
                            printf("-------------------------------------------\n");
                            printf("DATA | HORA |              JOGOS          |",224,144);
                            printf("\n-------------------------------------------\n");
                            mostre_lis_jogosC(lis_jog, lis_sel);
                            break;
                        case '4':
                            printf("\n**************************************\n");
                            printf("**              Grupo D            **\n");
                            printf("**************************************\n");
                            printf("-------------------------------------------\n");
                            printf("DATA | HORA |              JOGOS          |",224,144);
                            printf("\n-------------------------------------------\n");
                            mostre_lis_jogosD(lis_jog, lis_sel);
                            break;
                        case '5':
                            printf("\n**************************************\n");
                            printf("**              Grupo E            **\n");
                            printf("**************************************\n");
                            printf("-------------------------------------------\n");
                            printf("DATA | HORA |              JOGOS          |",224,144);
                            printf("\n-------------------------------------------\n");
                            mostre_lis_jogosE(lis_jog, lis_sel);
                            break;
                        case '6':
                            printf("\n**************************************\n");
                            printf("**              Grupo F            **\n");
                            printf("**************************************\n");
                            printf("-------------------------------------------\n");
                            printf("DATA | HORA |              JOGOS          |",224,144);
                            printf("\n-------------------------------------------\n");
                            mostre_lis_jogosF(lis_jog, lis_sel);
                            break;
                        case '7':
                            printf("\n**************************************\n");
                            printf("**              Grupo G            **\n");
                            printf("**************************************\n");
                            printf("-------------------------------------------\n");
                            printf("DATA | HORA |              JOGOS          |",224,144);
                            printf("\n-------------------------------------------\n");
                            mostre_lis_jogosG(lis_jog, lis_sel);
                            break;
                        case '8':
                            printf("\n**************************************\n");
                            printf("**              Grupo H            **\n");
                            printf("**************************************\n");
                            printf("-------------------------------------------\n");
                            printf("DATA | HORA |              JOGOS          |",224,144);
                            printf("\n-------------------------------------------\n");
                            mostre_lis_jogosH(lis_jog, lis_sel);

                            break;
                        default:
                            printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                    }
                }
                break;
            case '2':
                while(1){
                    op3 = submenu();
                    if(op3 == '0')
                    {
                        break;
                    }
                    switch(op3)
                    {
                    case '1':
                        while(1){
                            opA = submenuJogos();
                                if(opA == '0')
                                {
                                    break;
                                }
                                switch(opA){
                                case '1':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosAT1(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '2':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosAT2(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time da Time 02: ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '3':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosAT3(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '4':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosAT4(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '5':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosAT5(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '6':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosAT6(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                default:
                                    printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                                }
                        }
                        break;
                    case '2':
                        while(1){
                            opB = submenuJogos();
                                if(opB == '0')
                                {
                                    break;
                                }
                                switch(opB){
                                case '1':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosBT1(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '2':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosBT2(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time da Time 02: ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '3':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosBT3(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '4':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosBT4(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '5':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosBT5(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '6':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosBT6(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                default:
                                    printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                                }
                        }
                        break;
                    case '3':
                        while(1){
                            opC = submenuJogos();
                                if(opC == '0')
                                {
                                    break;
                                }
                                switch(opC){
                                case '1':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosCT1(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '2':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosCT2(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time da Time 02: ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '3':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosCT3(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '4':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosCT4(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '5':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosCT5(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '6':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosCT6(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                default:
                                    printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                                }
                        }
                        break;
                    case '4':
                        while(1){
                            opD = submenuJogos();
                                if(opD == '0')
                                {
                                    break;
                                }
                                switch(opD){
                                case '1':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosDT1(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '2':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosDT2(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time da Time 02: ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '3':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosDT3(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '4':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosDT4(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '5':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosDT5(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '6':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosDT6(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                default:
                                    printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                                }
                        }
                        break;
                    case '5':
                        while(1){
                            opE = submenuJogos();
                                if(opE == '0')
                                {
                                    break;
                                }
                                switch(opE){
                                case '1':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosET1(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '2':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosET2(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time da Time 02: ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '3':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosET3(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '4':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosET4(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '5':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosET5(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '6':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosET6(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                default:
                                    printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                                }
                        }
                        break;
                    case '6':
                        while(1){
                            opF = submenuJogos();
                                if(opF == '0')
                                {
                                    break;
                                }
                                switch(opF){
                                case '1':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosFT1(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '2':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosFT2(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time da Time 02: ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '3':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosFT3(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '4':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosFT4(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '5':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosFT5(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '6':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosFT6(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                default:
                                    printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                                }
                        }
                        break;
                    case '7':
                        while(1){
                            opG = submenuJogos();
                                if(opG == '0')
                                {
                                    break;
                                }
                                switch(opG){
                                case '1':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosGT1(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '2':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosGT2(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time da Time 02: ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '3':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosGT3(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '4':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosGT4(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '5':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosGT5(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '6':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosGT6(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                default:
                                    printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                                }
                        }
                        break;
                    case '8':
                        while(1){
                            opH = submenuJogos();
                                if(opH == '0')
                                {
                                    break;
                                }
                                switch(opH){
                                case '1':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosHT1(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '2':
                                    printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosHT2(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time da Time 02: ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '3':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosHT3(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '4':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosHT4(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '5':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosHT5(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                case '6':
                                     printf("\n");
                                    printf("-------------------------------------------\n");
                                    printf("DATA | HORA |              JOGOS          |",224,144);
                                    printf("\n-------------------------------------------\n");
                                    mostre_lis_jogosHT6(lis_jog, lis_sel);
                                    printf("\n");
                                    printf("Digite o numero de gols do Time do Time 01: ");
                                    scanf("%d",&xgols.jogo1Time1);
                                    printf("Digite o numero de gols do Time do Time 02 : ");
                                    scanf("%d",&xgols.jogo1Time2);
                                    printf("\n");
                                    break;
                                default:
                                    printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                                }
                        }
                        break;
                    default:
                        printf("\n\n  Op%c%co inv%clida\n",135,198,160);
                    }
                }
                break;
            case '3':
                printf("\n  Caso 3\n");
                break;
            case '4':
                printf("\n  Caso 4\n");
                break;
            case '5':
                printf("\n  Caso 5\n");
                break;
            case '6':
                printf("\n  Caso 6\n");
                break;
            default:
                printf("\n\n  Op%c%co inv%clida\n\n",135,198,160);
        }
    }
    return 0;
}



















