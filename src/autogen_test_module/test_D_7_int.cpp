#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, Eigen::Dynamic, 7> test_int_D_7(const Eigen::Matrix<int, Eigen::Dynamic, 7> & M)
{
	return M;
}
void export_int_D_7()
{
	boost::python::def("test_int_D_7",test_int_D_7);
}

