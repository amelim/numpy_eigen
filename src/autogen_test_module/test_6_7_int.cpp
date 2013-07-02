#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 6, 7> test_int_6_7(const Eigen::Matrix<int, 6, 7> & M)
{
	return M;
}
void export_int_6_7()
{
	boost::python::def("test_int_6_7",test_int_6_7);
}

