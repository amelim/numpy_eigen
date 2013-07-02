#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, 6, 7> test_double_6_7(const Eigen::Matrix<double, 6, 7> & M)
{
	return M;
}
void export_double_6_7()
{
	boost::python::def("test_double_6_7",test_double_6_7);
}

