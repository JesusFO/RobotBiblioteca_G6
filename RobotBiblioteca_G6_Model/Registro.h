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
		Registro(int idRegistro, String^ direccion, String^ DNI, String^ contrase�a, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono,int idIngreso);

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