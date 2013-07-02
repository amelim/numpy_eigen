#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 7, 7> test_int_7_7(const Eigen::Matrix<int, 7, 7> & M)
{
	return M;
}
void export_int_7_7()
{
	boost::python::def("test_int_7_7",test_int_7_7);
}

