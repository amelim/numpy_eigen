#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<boost::uint8_t, 1, 7> test_uchar_1_7(const Eigen::Matrix<boost::uint8_t, 1, 7> & M)
{
	return M;
}
void export_uchar_1_7()
{
	boost::python::def("test_uchar_1_7",test_uchar_1_7);
}

