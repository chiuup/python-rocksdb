#include <pybind11/pybind11.h>
#include <rocksdb/options.h>

namespace py = pybind11;

PYBIND11_MODULE(pyrocksdb, m) {
    // optional module docstring
    m.doc() = "pybind11 example plugin";

    py::class_<rocksdb::DBOptions>(m, "DBOptions")
      .def(py::init<>())
      .def_readwrite("create_if_missing", &rocksdb::DBOptions::create_if_missing)
      .def_readwrite("error_if_exists", &rocksdb::DBOptions::error_if_exists)
      .def_readwrite("paranoid_checks", &rocksdb::DBOptions::paranoid_checks)
      // .def_readwrite("rate_limiter", &rocksdb::DBOptions::rate_limiter)
      // .def_readwrite("sst_file_manager", &rocksdb::DBOptions::sst_file_manager)
      .def_readwrite("max_open_files", &rocksdb::DBOptions::max_open_files)
      .def_readwrite("max_file_opening_threads", &rocksdb::DBOptions::max_file_opening_threads)
      .def_readwrite("max_total_wal_size", &rocksdb::DBOptions::max_total_wal_size)
      .def_readwrite("statistics", &rocksdb::DBOptions::statistics)
      .def_readwrite("use_fsync", &rocksdb::DBOptions::use_fsync);

    // bindings to Pet class
    py::class_<rocksdb::Options>(m, "Options")
      .def(py::init<>());

}

