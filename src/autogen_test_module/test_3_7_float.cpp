#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<float, 3, 7> test_float_3_7(const Eigen::Matrix<float, 3, 7> & M)
{
	return M;
}
void export_float_3_7()
{
	boost::python::def("test_float_3_7",test_float_3_7);
}

