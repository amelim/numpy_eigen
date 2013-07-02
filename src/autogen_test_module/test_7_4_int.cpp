#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<int, 7, 4> test_int_7_4(const Eigen::Matrix<int, 7, 4> & M)
{
	return M;
}
void export_int_7_4()
{
	boost::python::def("test_int_7_4",test_int_7_4);
}

