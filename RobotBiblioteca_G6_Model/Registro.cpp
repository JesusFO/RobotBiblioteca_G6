#include "Registro.h"

using namespace RobotBiblioteca_G6_Model;

Registro::Registro(): IngresoDatos() {

}

Registro::Registro(int idRegistro, String^ direccion, String^ DNI, String^ contrase�a, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono,int idIngreso) : IngresoDatos(idIngreso,codigo, correo, cuenta, telefono) {

	this->idRegistro = idRegistro;
	this->direccion = direccion;
	this->DNI = DNI;
	this->contrase�a = contrase�a;
	this->fecha = fecha;
}



int Registro::getIdRegistro() {
	return this->idRegistro;
}
void Registro::setIdRegistro(int idRegistro) {
	this->idRegistro = idRegistro;
}

String^ Registro::getDireccion() {
	return this->direccion;
}

void Registro::setDireccion(String^ direccion) {
	this->direccion = direccion;
}

String^ Registro::getDNI() {
	return this->DNI;
}

void Registro::setDNI(String^ DNI) {
	this->DNI = DNI;
}

String^ Registro::getContrase�a() {
	return this->contrase�a;
}

void Registro::setContrase�a(String^ contrase�a) {
	this->contrase�a = contrase�a;
}

String^ Registro::getFecha() {
	return this->fecha;
}

void Registro::setFecha(String^ fecha) {
	this->fecha = fecha;
}
