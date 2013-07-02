#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<boost::uint8_t, 7, Eigen::Dynamic> test_uchar_7_D(const Eigen::Matrix<boost::uint8_t, 7, Eigen::Dynamic> & M)
{
	return M;
}
void export_uchar_7_D()
{
	boost::python::def("test_uchar_7_D",test_uchar_7_D);
}

