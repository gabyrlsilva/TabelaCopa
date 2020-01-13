struct data
{
    int dia;
    int mes;
};
typedef struct data TData;

void mostre_data(TData dat)
{
    printf("%02d/%02d", dat.dia, dat.mes);
}
