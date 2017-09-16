

typedef struct
{
    int dia;
    int mes;
}eFecha;

typedef struct
{
    int codigo;
    char descrip[100];
    float precio;
    int idLab;
    int stock;
    eFecha elaboracion;
    eFecha venci;
}eMedicamento;

typedef struct
{
    int idLab;
    char nombre[100];
    char direccion[100];
    char telefono[100];
}eLaboratorio;

typedef struct
{
    int idCliente;
    char nombre[100];
    int codigo;
    eFecha diaCompra;
}eCliente;

int menu(char[]);

void inicializarMedicamentos(listaMedicamento , MEDIC);
void inicializarLaboratorio(listaLaboratorio , LAG);
void inicializarCliente(listaCliente , CLIENTE);

void mostrarMed(eMedicamento med);
void mostrarLab(eLaboratorio lab);
void mostrarCliente(eCliente cli);

void mostrarListaMedicamento(eMedicamento[],int);
void mostrarListaLaboratorio(eLaboratorio[],int);
void mostrarListaCliente(eCliente[],int);

