
#ifndef RETDEC_DECOMPILER_H
#define RETDEC_DECOMPILER_H

#include "function.h"

class Decompiler
{
	public:
		/// Decompile the function contianing the given \p ea.
		/// If the function was already decompiled, just display it, unless
		/// \p redecompile is \c true.
		static Function* decompile(ea_t ea, bool redecompile = false);

		/// Decompile an entire input binary.
		static void decompile(const std::string& out);
};

#endif
