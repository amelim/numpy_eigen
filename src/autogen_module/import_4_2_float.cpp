// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>

#include <boost/cstdint.hpp>


void import_4_2_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 4, 2 > >::register_converter();
}

