#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, 7, 3> test_double_7_3(const Eigen::Matrix<double, 7, 3> & M)
{
	return M;
}
void export_double_7_3()
{
	boost::python::def("test_double_7_3",test_double_7_3);
}

