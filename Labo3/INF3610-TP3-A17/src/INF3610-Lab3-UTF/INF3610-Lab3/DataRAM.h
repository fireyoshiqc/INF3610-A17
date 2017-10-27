///////////////////////////////////////////////////////////////////////////////
//
//	DataRAM.h
//
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <systemc.h>
#include "RAM.h"

///////////////////////////////////////////////////////////////////////////////
//
//	Classe DataRAM
//
///////////////////////////////////////////////////////////////////////////////
class DataRAM : public RAM
{
	public: 

		// Constructeur
		DataRAM( sc_module_name name, const char *dataFileName, unsigned long RAMSize = 0, bool verbose = false );
		
		// Destructeur
		~DataRAM();

		// M�thode
		unsigned int Read(unsigned int addr);
		void Write(unsigned int addr, unsigned int data);

	private:	

		// Variable 
		
		// M�thode
		void end_of_simulation();
};

