// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>

#include <boost/cstdint.hpp>


void import_D_5_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, Eigen::Dynamic, 5 > >::register_converter();
}

