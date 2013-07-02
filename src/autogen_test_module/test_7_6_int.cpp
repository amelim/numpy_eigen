#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 7, 6> test_int_7_6(const Eigen::Matrix<int, 7, 6> & M)
{
	return M;
}
void export_int_7_6()
{
	boost::python::def("test_int_7_6",test_int_7_6);
}

