#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, 1, 7> test_double_1_7(const Eigen::Matrix<double, 1, 7> & M)
{
	return M;
}
void export_double_1_7()
{
	boost::python::def("test_double_1_7",test_double_1_7);
}

