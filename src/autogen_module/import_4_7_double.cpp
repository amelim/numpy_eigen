// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>

#include <boost/cstdint.hpp>


void import_4_7_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 4, 7 > >::register_converter();
}

