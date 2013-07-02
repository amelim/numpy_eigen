#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, Eigen::Dynamic, 7> test_double_D_7(const Eigen::Matrix<double, Eigen::Dynamic, 7> & M)
{
	return M;
}
void export_double_D_7()
{
	boost::python::def("test_double_D_7",test_double_D_7);
}

