#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<float, 7, 5> test_float_7_5(const Eigen::Matrix<float, 7, 5> & M)
{
	return M;
}
void export_float_7_5()
{
	boost::python::def("test_float_7_5",test_float_7_5);
}

