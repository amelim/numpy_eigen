#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 7, 5> test_int_7_5(const Eigen::Matrix<int, 7, 5> & M)
{
	return M;
}
void export_int_7_5()
{
	boost::python::def("test_int_7_5",test_int_7_5);
}

