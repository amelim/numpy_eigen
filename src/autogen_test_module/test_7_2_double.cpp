#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, 7, 2> test_double_7_2(const Eigen::Matrix<double, 7, 2> & M)
{
	return M;
}
void export_double_7_2()
{
	boost::python::def("test_double_7_2",test_double_7_2);
}

