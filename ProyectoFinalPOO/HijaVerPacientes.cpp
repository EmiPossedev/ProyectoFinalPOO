#include "HijaVerPacientes.h"

HijaVerPacientes::HijaVerPacientes(wxWindow *parent) : VerPacienteHija(parent) {
		// Configuramos las COLUMNAS 
		m_listaPacientes->AppendColumn("Apellido y Nombre", wxLIST_FORMAT_LEFT, 220);
		m_listaPacientes->AppendColumn("DNI", wxLIST_FORMAT_LEFT, 100);
		m_listaPacientes->AppendColumn("Teléfono", wxLIST_FORMAT_LEFT, 110);
		m_listaPacientes->AppendColumn("Obra Social", wxLIST_FORMAT_LEFT, 100);
		m_listaPacientes->AppendColumn("Sesiones", wxLIST_FORMAT_LEFT, 80);
		
		// Cargamos un paciente de prueba (Para ver si funciona)
		// InsertItem crea la fila y pone el texto de la PRIMERA columna
		long fila = m_listaPacientes->InsertItem(0, "Giannone Albertina"); 
		
		// SetItem llena las demas columnas de esa fila (1, 2, 3, 4)
		m_listaPacientes->SetItem(fila, 1, "41490773");       // DNI
		m_listaPacientes->SetItem(fila, 2, "3425856780");     // Teléfono
		m_listaPacientes->SetItem(fila, 3, "Ospac");          // Obra Social
		m_listaPacientes->SetItem(fila, 4, "1/10");           // Sesiones
	}


void HijaVerPacientes::OnVolverClick( wxCommandEvent& event )  {
	EndModal(0); 
	event.Skip();
}

HijaVerPacientes::~HijaVerPacientes() {
	
}

