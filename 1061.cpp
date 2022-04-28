#include <iostream>
using namespace std;

int main()
{
	int dia, dia_f, hora, hora_f, min, min_f, seg, seg_f, inicio, termino, temp_event;
	string p2;
	
	cin >> p2 >> dia; 
	cin >> hora >> p2 >> min >> p2 >> seg;
	cin >> p2 >> dia_f; 
	cin >> hora_f >> p2 >> min_f >> p2 >> seg_f;
	
	inicio = seg + (min * 60) + (hora * 60 * 60) + (dia * 60 * 60 *24);
	termino = seg_f + (min_f * 60) + (hora_f * 60 * 60) + (dia_f * 60 * 60 *24);
	temp_event = termino - inicio;
	
//	dia = temp_event/(60 * 60 * 24); 
//	temp_event = dia % (60 * 60 * 24);
//	hora = temp_event/(60 * 60);
//	temp_event = hora % (60 * 60);
//	min =  temp_event/ (60);
//	temp_event = min % (60);
//	seg = temp_event;

	cout << temp_event/(60 * 60 * 24) << " dia(s)" << endl;
	temp_event = temp_event % (60 * 60 * 24);

	cout << temp_event/(60 * 60) << " hora(s)" << endl;
	temp_event = temp_event % (60 * 60);
	
	cout << temp_event/ (60) << " minuto(s)" << endl;
	temp_event = temp_event % (60);

	cout << temp_event << " segundo(s)" << endl;
}
