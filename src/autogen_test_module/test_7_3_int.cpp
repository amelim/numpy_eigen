#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 7, 3> test_int_7_3(const Eigen::Matrix<int, 7, 3> & M)
{
	return M;
}
void export_int_7_3()
{
	boost::python::def("test_int_7_3",test_int_7_3);
}

