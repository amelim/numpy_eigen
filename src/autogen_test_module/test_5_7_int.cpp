#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 5, 7> test_int_5_7(const Eigen::Matrix<int, 5, 7> & M)
{
	return M;
}
void export_int_5_7()
{
	boost::python::def("test_int_5_7",test_int_5_7);
}

