#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<float, 7, 3> test_float_7_3(const Eigen::Matrix<float, 7, 3> & M)
{
	return M;
}
void export_float_7_3()
{
	boost::python::def("test_float_7_3",test_float_7_3);
}

