#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<float, 7, 7> test_float_7_7(const Eigen::Matrix<float, 7, 7> & M)
{
	return M;
}
void export_float_7_7()
{
	boost::python::def("test_float_7_7",test_float_7_7);
}

