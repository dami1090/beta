
typedef struct
{
    int codigo;
    char descripcion[50];
    float precio;
    char laboratorio[30];
    int estado;//0:No esta cargado o 1:Si esta cargado
}eMedicamento;

/** \brief
 *
 * \param Array de medicamentos: Lista de medicamentos
 * \param
 * \return completa el array con datos hardcodeados
 *
 */

void cargarMedicamentos(eMedicamento[], int);
/** \brief
 *
 * \param la lista de medicamentos
 * \param
 * \return printf de la lista de medicamentos
 *
 */

void mostraTodosMedicamentos(eMedicamento[], int);
/** \brief
 *
 * \param lista de medicamentos
 * \param
 * \return  muestra el medicamento
 *
 */

void mostrarMedicamento(eMedicamento);
/** \brief
 *
 * \param la lista de medicamentos
 * \param
 * \return medicamentos ordenados por laborarotio
 *
 */

void ordenarMedicamentos(eMedicamento[], int);
/** \brief
 *
 * \param la lista de medicamentos
 * \param
 * \return los valores de las variables precargado(medicamnetos, precio, lab, etc)
 *
 */

void inicializarMedicamentos(eMedicamento[], int);
/** \brief
 *
 * \param la lista de medicamentos
 * \param
 * \return cambiar el laboratorio de un medicamneto
 *
 */

void modificarMedicamentos(eMedicamento[],int);
/** \brief
 *
 * \param lista de medicamentos
 * \param
 * \return pasar a estado 0 un medicamento y dejar el espacio libre
 *
 */

void eliminarMedicamentos(eMedicamento[],int);

