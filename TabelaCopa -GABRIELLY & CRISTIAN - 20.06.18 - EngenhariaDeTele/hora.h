struct hora
{
    int hora;
    int minuto;
};
typedef struct hora THora;

void mostre_hora(THora hor)
{
    printf("%02d:%02d", hor.hora, hor.minuto);
}
