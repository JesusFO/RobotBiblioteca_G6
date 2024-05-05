#pragma once
#include "IngresoDatos.h"
using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Registro : IngresoDatos {

	private:
		int idRegistro;
		String^ direccion;
		String^ DNI;
		String^ contrase�a;
		String^ fecha;

	public:
		Registro();
		Registro(int codigo, String^ direccion, String^ telefono, String^ cuenta, String^ DNI, String^ correo, String^ contrase�a, String^ fecha, int idRegistro, int idIngreso);

		int getIdRegistro();
		void setIdRegistro(int idRegistro);

		String^ getDireccion();
		void setDireccion(String^ direccion);

		String^ getDNI();
		void setDNI(String^ DNI);

		String^ getContrase�a();
		void setContrase�a(String^ contrase�a);

		String^ getFecha();
		void setFecha(String^ fecha);


	};


}