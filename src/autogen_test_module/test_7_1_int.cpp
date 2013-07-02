#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 7, 1> test_int_7_1(const Eigen::Matrix<int, 7, 1> & M)
{
	return M;
}
void export_int_7_1()
{
	boost::python::def("test_int_7_1",test_int_7_1);
}

