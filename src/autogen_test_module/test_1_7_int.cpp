#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 1, 7> test_int_1_7(const Eigen::Matrix<int, 1, 7> & M)
{
	return M;
}
void export_int_1_7()
{
	boost::python::def("test_int_1_7",test_int_1_7);
}

