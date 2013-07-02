#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<float, 1, 7> test_float_1_7(const Eigen::Matrix<float, 1, 7> & M)
{
	return M;
}
void export_float_1_7()
{
	boost::python::def("test_float_1_7",test_float_1_7);
}

