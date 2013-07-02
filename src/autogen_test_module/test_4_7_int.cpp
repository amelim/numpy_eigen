#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 4, 7> test_int_4_7(const Eigen::Matrix<int, 4, 7> & M)
{
	return M;
}
void export_int_4_7()
{
	boost::python::def("test_int_4_7",test_int_4_7);
}

